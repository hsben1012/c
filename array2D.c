#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrix[][3] = {{1, 2, 3}, {4, 5, 6}};
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%p %d\n", &matrix[i][j], matrix[i][j]);
			printf("%p %d\n\n", *(matrix + i) + j, *(*(matrix + i) + j));
		}
	}

	/*
	 matrix[0] = *(matrix + 0)
	 matrix[0][0] = *(*(matrix + 0) + 0)
	 */

	int (*ptr2D)[3] = matrix;
	printf("%d\n", ptr2D[1][1]);

	int *ptr1D = matrix[0];
	printf("%d\n", (ptr1D)[1]);

	return 0;
}
