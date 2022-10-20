#include <stdio.h>
#include <stdlib.h>

void assignMem(int **p)
{
	printf("%p\n", p); // main's p address
	printf("%p\n", *p); // main's p = NULL
	*p = (int *)malloc(sizeof(int));
	printf("%p\n", *p); // main's p allocated memory address
	**p = 10;
}

void saferFree(int **p)
{
	if(*p != NULL && p != NULL)
	{
		free(*p);
		*p = NULL;
	}
}

int main()
{
	int *p = NULL;
	printf("%p\n", p); // p = NULL
	printf("%p\n", &p); // p address 
	assignMem(&p);

	printf("%p\n", p); // p allocated memory address
	printf("%d\n", *p); // p = 10

	printf("%p\n", &p); // p = address 
	saferFree(&p);

	printf("%p\n", p); // p = NULL
	/*
	int *p1 = NULL;
	int **p2;
	p2 = &p1;
	*p2 = (int *)malloc(sizeof(int)); // p1
	**p2 = 69; // *p1

	printf("%p %p\n", p1, *p2);
	printf("%d %d\n", *p1, **p2);
	*/
}
