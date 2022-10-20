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

void setArray2Dvalue(int **array, int size1, int size2, int value)
{
	for(int i = 0; i < size1; i++)
	{
		for(int j = 0; j < size2; j++)
		{
			array[i][j] = value;
		}
	}
}

int *allocateMem1D(int size)
{
	int *vector1D = (int *)malloc(sizeof(int) * size);
	return vector1D;
}

void allocateMem1DNoReturn(int **arr, int size)
{
	*arr = (int *)malloc(sizeof(int) * size);
}

int **allocateMem2D(int row, int col)
{
	int **vector2d = (int **)malloc(sizeof(int *) * row);
	for(int i = 0; i < row; i++)
	{
		vector2d[i] = (int *)malloc(sizeof(int) * col);
	}
	return vector2d;
}

void allocateMem2DNoReturn(int ***vector2d, int row, int col)
{
	*vector2d = (int **)malloc(sizeof(int *) * row);
	for(int i = 0; i < row; i++)
	{
		(*vector2d)[i] = (int *)malloc(sizeof(int) * col);
	}
}

int main()
{
	/*
	int *array1D = allocateMem1D(5);
	setArrayValue(array1D, 5, 69);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", array1D[i]);
	}
	free(array1D);
	*/

	/*
	int *array1D = NULL;
	allocateMem1DNoReturn(&array1D, 5);
	setArrayValue(array1D, 5, 79);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", array1D[i]);
	}
	free(array1D);
	*/

	/*
	int row = 2;
	int col = 3;
	int **array2D = allocateMem2D(row, col);
	setArray2Dvalue(array2D, row, col, 76);
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d\n", array2D[i][j]);
		}
		printf("\n");
	}
	*/

	int row = 2;
	int col = 3;
	int **array2D = NULL; 
	allocateMem2DNoReturn(&array2D, row, col);
	setArray2Dvalue(array2D, row, col, 87);
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d\n", array2D[i][j]);
		}
		printf("\n");
	}

	return 0;
}
