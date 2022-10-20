#include <stdio.h>
#include <string.h>

int main()
{
	/*
	FILE *fp = NULL;
	const char *mode = "r";

	fp = fopen("/home/ben/input", mode);

	char szTest[1000];
	if(fp != NULL)
	{
		while(!feof(fp))
		{
			memset(szTest, 0, sizeof(szTest));
			fgets(szTest, sizeof(szTest), fp);
			printf("%s", szTest);
		}
	}
	fclose(fp);
	*/

	/*
	FILE *fp = NULL;
	char *mode = "r";
	fp = fopen("/home/ben/input", mode);
	char str[5];
	int dec;
	float pi;
	fscanf(fp, "%s%d%f", str, &dec, &pi);

	printf("%s %d %f\n", str, dec, pi);
	fclose(fp);
	*/

	FILE *fp = NULL;
	char *mode = "w";
	fp = fopen("/home/ben/output", mode);
	float v_pi = 3.14;
	fprintf(fp, "Value of pi = %f\n", v_pi);
}
