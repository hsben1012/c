#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showArray(char (*arr)[20], int row)
{
	for(int i = 0; i < row; i++)
	{
		printf("%s\n", arr[i]);
	}
}

void showArray2D(char **arr, int row)
{
	for(int i = 0; i < row; i++)
	{
		printf("%s\n", arr[i]);
	}
}

int main()
{
	/* 1D 
	char *tabHeader = "Media Player";
	// tabHeader[0] = 'F';

	char header[] = "Main Player";
	header[0] = 'F';

	char *heaper = (char *)malloc(strlen("Heaper") + 1);
	strcpy(heaper, "Heaper");

	printf("%s\n%s\n%s\n", tabHeader, header, heaper);
	free(heaper);
	*/

	/* 2D */
	char *tabHeader2D[3] = {"Python", "C++", "C"};
	//tabHeader2D[0][0] = 'H';

	char Header2D[][20] = {"Python", "C++", "C"}; 

	char **ptrHeader2D = (char **)malloc(sizeof(char *) * 3);
	for(int i = 0; i < 3; i++)
	{
		ptrHeader2D[i] = (char *)malloc(sizeof(char) * 11);
	}
	strcpy(ptrHeader2D[0], "Python");
	strcpy(ptrHeader2D[1], "C++");
	strcpy(ptrHeader2D[2], "C");

	char (*array)[20] = Header2D;
	char **ptr = tabHeader2D;

	showArray2D(tabHeader2D, 3);
}
