#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int size, int value)
{
	static int array[5];
	for(int i = 0; i < size; i++)
	{
		array[i] = value;
	}
	return array;
}

void setArrayValue(int *array, int size, int value)
{
	for(int i = 0; i < size; i++)
	{
		array[i] = value;
	}
}

void setArray2Dvalue(int (*array)[3], int size1, int size2, int value)
{
	for(int i = 0; i < size1; i++)
	{
		for(int j = 0; j < size2; j++)
		{
			array[i][j] = value;
		}
	}
}

int main()
{
	/*
	int *mainArray = allocateArray(5, 45);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", mainArray[i]);
	}
	*/

	/*
	int vector[] = {1, 2, 3, 4, 5};
	setArrayValue(vector, 5, 45);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", vector[i]);
	}
	*/

	/*
	int matrix[][3] = {{1, 2, 3}, {4, 5, 6}};
	setArray2Dvalue(matrix, 2, 3, 33);
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	*/

	/*
	int *vector1d =  (int *)malloc(sizeof(int) * 5);
	setArrayValue(vector1d, 5, 69);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", *(vector1d + i));
	}
	free(vector1d);
	*/

	/*
	int row = 2;
	int col = 3;

	int **vector2D; // 配置或許不連續的記憶體
	vector2D = (int **)malloc(sizeof(int *) * row);
	for(int i = 0; i < row; i ++)
	{
		*(vector2D + i) = (int*)malloc(sizeof(int) * col);
	}
	*/

	int row = 2;
	int col = 3;
	
	int **vector2D = (int **)malloc(sizeof(int *) * row); // 配置連續記憶體
	*(vector2D + 0)= (int *)malloc(sizeof(int) * (row * col));
	for(int i = 1; i < row; i++)
	{
		vector2D[i] = vector2D[0] + col * i;
	}

	free(vector2D);
	free(*vector2D);

	return 0;
}
