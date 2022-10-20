#include <stdio.h>
int main()
{
	/*
	int index, sum = 0;
	for(index = 1; index <= 10; index++)
	{
		sum += index;
		printf("%d\n", sum);
	}
	*/

	/*
	for(index = 0; index <= 100; index += 5)
	{
		printf("%d\n", index);
	}
	*/

	/*
	for(;;)
	{
		printf("Yes!");
	}
	*/

	/*
	int i, j;
	for(i = 0; i < 10; i++)
	{
		printf("i = %d:", i);
		for(j = 0; j < 10; j++)
		{
			printf(" j = %d", j);
		}
		printf("\n");
	}
	*/

	/*
	int x, y;
	for(x = 1; x < 10; x++)
	{
		for(y = 1; y < 10; y++)
		{
			if(y == 9)
			{
				printf("%d x %d = %d \n", y, x, x * y);
			}
			else
			{
				printf("%d x %d = %d ", y, x, x * y);
			}
		}
	}
	*/

	int i, j, k;
	for(i = 0, j = 0, k = 0; i < 10, j < 3, k < 20; i++, j++, k+=2)
	{
		printf("%d %d %d\n", i, j, k);
	}
}
