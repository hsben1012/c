#include <stdlib.h>
#include <stdio.h>

int main()
{
	int vector[] = {1, 2, 3, 4, 5};

	printf("%p\n\n", &vector);

	for(int i = 0; i < 5; i++)
	{
		printf("%p\n", &vector[i]);
		printf("%p\n\n", vector + i);

		printf("%d\n", vector[i]);
		printf("%d\n\n", *(vector + i));
	}

	int *vPtr = vector;
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", *(vPtr + i));
	}

	/*
	 vector[0] = *(vector + 0)
	 */

	return 0;
}
