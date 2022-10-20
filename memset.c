#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* 1D array
	int *vector1D= (int *)malloc(sizeof(int) * 5);

	memset(vector1D, -1, sizeof(int) * 5);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", vector1D[i]);
	}
	*/

	/* 2d array 不連續記憶體位置
	int row = 2, col = 3;
	int **vector2D = (int **)malloc(sizeof(int *) * row);
	for(int i = 0; i < 3; i++)
	{
		vector2D[i] = (int *)malloc(sizeof(int) * col);
		memset(vector2D[i], 0, sizeof(int) * col);
	}
	*/

	int row = 3, col = 3;
	int **vectorXDD = (int **)malloc(sizeof(int *) * row);
	vectorXDD[0] = (int *)malloc(sizeof(int) * (row * col));
	for(int i = 1; i < row; i++)
	{
		vectorXDD[i] = vectorXDD[0] + (col * i);
	}
	memset(vectorXDD[0], 0, sizeof(int) * (row * col));

	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d ", vectorXDD[i][j]);
		}
		printf("\n");
	}
	free(vectorXDD);

	return 0;
}
