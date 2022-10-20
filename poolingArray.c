#include <stdio.h>
#include <string.h>
int main()
{
	/*
	int i, j, size;
	int int_array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int int_array2[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 110};
	size = sizeof(int_array1) / sizeof(int);
	for(i = 0, j = 0; i < size; i++, j += 2)
	{
		printf("%20d %20d\n", int_array1[i], int_array2[j]);
	}
	*/

	/*
	char char_array[] = "Hello World!";
	int i;
	printf("%ld\n", sizeof(char_array) / sizeof(char));
	printf("%ld\n", strlen(char_array));

	//for(i = 0; i < strlen(char_array); i++)
	for(i = 0; char_array[i] != 0; i++)
	{
		printf("%c", char_array[i]);
	}
	*/

	int i, j;
	int int_array[][10] = 
	{
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 
		{11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, 
		{21, 22, 23, 24, 25, 26, 27, 28, 29, 30} 
	};
	int row = (sizeof(int_array) / sizeof(int)) / (sizeof(int_array[0]) / sizeof(int)),

 		col = sizeof(int_array[0]) / sizeof(int);

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d\t", int_array[i][j]);
		}
		printf("\n");
	}

	char char_2D[][20] = 
	{
		"Hank Li",
		"Andy Wang",
		"Vivian",
		"Steven Chang"
	};
	int rows = (sizeof(char_2D) / sizeof(int)) / (sizeof(char_2D[0]) / sizeof(int));
	for(i = 0; i < rows; i++)
	{
		//for(j = 0; char_2D[i][j] != 0; j++)
		for(j = 0; j < strlen(char_2D[i]); j++)
		{
			printf("%c", char_2D[i][j]);
		}
		printf("\n");
	}
}
