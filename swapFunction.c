#include <stdio.h>

void swap(int *a, int *b)
{
	printf("----swap----\n");
	printf("a = %p, b = %p\n", a, b);
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;	
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %p, b = %p\n", &a, &b);
	printf("Before swap: a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("After swap: a = %d, b = %d\n", a, b);

	return 0;
}
