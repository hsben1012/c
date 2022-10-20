#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp = NULL;
	const char *mode = "r";

	fp = fopen("/home/ben/test", mode);

	char szTest[1000];
	if(fp != NULL)
	{
		/*
		while(!feof(fp))
		{
			memset(szTest, 0, sizeof(szTest));
			fgets(szTest, sizeof(szTest), fp);
			printf("%s", szTest);
		}
		*/
		fread(szTest, sizeof(char), sizeof(szTest), fp);
		printf("%s", szTest);
	}
	fclose(fp);

	unsigned char data[] = {10, 11, 12, 13, 14, 15};

	FILE *writer = NULL;
	mode = "wb";
	writer = fopen("/home/ben/data.bin", mode); 
	fwrite(data, sizeof(unsigned char), sizeof(data), writer);
	fclose(writer);

	FILE *reader = NULL;
	unsigned char binData[50];
	mode = "rb";
	reader = fopen("/home/ben/data.bin", mode);
	fread(binData, sizeof(unsigned char), sizeof(binData), reader);
	for(int i = 0; i < 6; i++)
	{
		printf("%d\n", binData[i]);
	}
	fclose(reader);
}
