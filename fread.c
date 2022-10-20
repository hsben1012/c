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
}
