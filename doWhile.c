#include <stdio.h> 
int main()
{
	int sum = 0, j = 1;
	/*
	while(j <= 10)
	{
		sum += j;
		j ++;
	}
	printf("Sum_while: %d\n", sum);
	*/

	do
	{
		sum += j;
		j ++;
	}while(j <= 10);
	printf("Do_while: %d\n", sum);
}
