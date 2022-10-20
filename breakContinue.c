#include <stdio.h>
int main()
{
	/*
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		break;
	}
	*/

	int i, threshold = 20;
	int int_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 22, 13, 14, 15, 16};
	for(i = 0; i < sizeof(int_array) / sizeof(int); i++)
	{
		if(int_array[i] > threshold)
		{
			break;
		}
		printf("%d\n", int_array[i]);
	}
}
