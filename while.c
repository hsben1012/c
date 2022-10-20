#include <stdio.h>
int main()
{
	/*
	int index = 1, sum = 0;
	while(index <=10)
	{
		sum += index;
		index ++;
	}
	printf("%d\n", sum);
	*/

	/*
	int i = 0, j;
	while(i < 10)
	{
		printf("i = %d", i);
		j = 0;
		while(j < 10)
		{
			printf(":j = %d", j);
			j ++;
		}
		i ++;
		printf("\n");
	}
	*/

	// 99乘法表
	int i = 1, j;
	while(i < 10)
	{
		j = 1;
		while(j < 10)
		{
			if(j == 9)
			{
				printf("%d x %d = %d \n", j, i, i * j);
			}
			else
			{
				printf("%d x %d = %d ", j, i, i * j);
			}
			j ++;
		}
		i ++;
	}
}
