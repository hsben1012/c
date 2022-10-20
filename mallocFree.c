#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	int *pi;
	pi = (int *)malloc(sizeof(int));
	*/

	/*
	int *pi = (int *)malloc(sizeof(int));
	*pi = 8;
	printf("pi 自己的位址 = %p\npi 動態配置的位置 = %p\n*pi = %d\n", &pi, pi, *pi);
	free(pi);
	*/

	int *pi;// = NULL;
	if(pi == NULL)
	{
		pi = (int *)malloc(sizeof(int));
		*pi = 8;
		printf("pi 自己的位址 = %p\npi 動態配置的位置 = %p\n*pi = %d\n", &pi, pi, *pi);
	}

	/*
	if(pi != NULL)
	{
		free(pi);
		pi = NULL;
	}
	*/
}
