#include <stdio.h>
#include <string.h>

int main()
{
	const char *mode;
	unsigned char data[] = {10, 11, 12, 13, 14, 15};

	FILE *writer = NULL;
	mode = "wb";
	writer = fopen("/home/ben/data.bin", mode); 
	fwrite(data, sizeof(unsigned char), sizeof(data), writer);
	fclose(writer);

	FILE *reader = NULL;
	unsigned char binData[50];
	memset(binData, 0, sizeof(binData));
	mode = "rb";
	reader = fopen("/home/ben/data.bin", mode);

	//fseek(reader, 2, SEEK_SET);
	//fseek(reader, 2, SEEK_CUR);
	fseek(reader, -3, SEEK_END);

	fread(binData, sizeof(unsigned char), sizeof(binData), reader);
	for(int i = 0; i < 6; i++)
	{
		printf("%d\n", binData[i]);
	}
	fclose(reader);
}
