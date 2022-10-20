#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;

#pragma pack(1)
typedef struct
{
	/* BMP Header */
	char CharB;
	char CharM;
	UINT32 Size;
	UINT32 Reserved;
	UINT32 ImageOffset;

	/* DIB Header */
	UINT32 HeaderSize;
	UINT32 PixelWidth;
	UINT32 PixelHeight;
	UINT16 Planes;
	UINT16 BitPerPixel;
	UINT32 CompressionType;
	UINT32 ImageSize;
	UINT32 XPixelPerMeter;
	UINT32 YPixelPerMeter;
	UINT32 NumberOfColors;
	UINT32 ImportantColors;
}Header;

typedef struct
{
	UINT8 R, G, B;
}Pixel;

typedef struct
{
	Header *imageHeader;
	UINT8 header[14] ;
	UINT8 headerInfo[40];
	UINT8 *data;
}iplImage;
#pragma pack()

iplImage *loadImage(char *filename)
{
	iplImage *src = (iplImage *)malloc(sizeof(iplImage));
	FILE *file = fopen(filename, "rb");
	UINT8 *imageHeaderBuffer = (UINT8 *)malloc(sizeof(UINT8) * 54);

	fread(imageHeaderBuffer, sizeof(UINT8), sizeof(UINT8) * 54, file);
	src ->imageHeader = (Header *)imageHeaderBuffer;

	memcpy(src ->header, imageHeaderBuffer, sizeof(src ->header));
	memcpy(src ->headerInfo, imageHeaderBuffer + 14, sizeof(src ->headerInfo));

	src ->data = malloc(sizeof(UINT8) * src ->imageHeader ->PixelHeight * src ->imageHeader ->PixelWidth *3);
	fseek(file, src ->imageHeader ->ImageOffset, SEEK_SET);
	fread(src ->data, sizeof(UINT8), sizeof(UINT8) * src ->imageHeader ->PixelHeight * src ->imageHeader ->PixelWidth *3, file);
	fclose(file);

	return src;
}

void showImage(iplImage *src)
{
	printf("====== Header ======\n");
	printf("Signature = %c\n", src ->imageHeader ->CharB);
	printf("Signature = %c\n", src ->imageHeader ->CharM);
	printf("File Size = %d\n", src ->imageHeader ->Size);
	printf("Offset = %d\n", src ->imageHeader ->ImageOffset);

	printf("====== Info ======\n");
	printf("size = %d\n", src ->imageHeader ->HeaderSize);
	printf("Width = %d\n", src ->imageHeader ->PixelWidth);
	printf("Height = %d\n", src ->imageHeader ->PixelHeight);
	printf("Planes = %d\n", src ->imageHeader ->Planes);
	printf("BitsPerPixel = %d\n", src ->imageHeader ->BitPerPixel);
	printf("Compression = %d\n", src ->imageHeader ->CompressionType);
	printf("ImageSize = %d\n", src ->imageHeader ->ImageSize);
	printf("XPixelPerMeter = %d\n", src ->imageHeader ->XPixelPerMeter);
	printf("YPixelPerMeter = %d\n", src ->imageHeader ->YPixelPerMeter);
	printf("ColorUsed = %d\n", src ->imageHeader ->NumberOfColors);
	printf("ColorsImportant = %d\n", src ->imageHeader ->ImportantColors);
}

void setPixel(iplImage *src, int x, int y)
{
	Pixel *pixel;
	int index = y + src ->imageHeader ->PixelWidth * 3 * x;
	pixel = (Pixel *)&src ->data[index];

	UINT8 Gray = pixel ->R * 0.3 + pixel ->G * 0.6 + pixel ->B * 0.11;
	pixel ->R = Gray;
	pixel ->G = Gray;
	pixel ->B = Gray;
}

void setScalar(iplImage *src)
{
	for(UINT32 i = 0; i < src ->imageHeader ->PixelHeight; i++)
	{
		for(UINT32 j = 0; j< src ->imageHeader ->PixelWidth * 3; j++)
		{
			setPixel(src, i, j);
		}
	}
}

void releaseImage(iplImage **src)
{
	if(src != NULL && *src != NULL)
	{
		free((*src) ->imageHeader);
		free((*src) ->data);
		free((*src));
	}
	(*src) = NULL;
}

void saveImage(iplImage *src, char *filename)
{
	FILE *file = fopen(filename, "wb");
	fwrite(src ->header, sizeof(UINT8), sizeof(src ->header), file);
	fwrite(src ->headerInfo, sizeof(UINT8), sizeof(src ->headerInfo), file);

	fseek(file, src ->imageHeader ->ImageOffset, SEEK_SET);
	fwrite(src ->data, sizeof(UINT8), sizeof(UINT8) * src ->imageHeader ->PixelHeight * src ->imageHeader ->PixelWidth *3, file);
	fclose(file);
}

int main()
{
	iplImage *src = loadImage("/home/ben/udemyCourse/C/sourceCode/projectReadPic/Logo.bmp");
	showImage(src);
	setScalar(src);
	saveImage(src, "ddd.bmp");

	releaseImage(&src);
}
