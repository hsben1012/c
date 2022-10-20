#include <stdio.h>
#include <string.h>

union Sample
{
	int a;
	float b;
	char c;
};

typedef union
{
	int a;
	double b;
	char c;
}Sample2;

typedef union
{
	int a;
	float b;
	char c[20];
}Test;

int main()
{
	/*
	union Sample s = {.a = 12};
	//s.c = 'c';
	//printf("int = %d, float = %f, char = %c\n", s.a, s.b, s.c);
	Sample2 t;
	printf("Sample = %ld\nSample2 = %ld\n", sizeof(s), sizeof(t));
	*/

	Test a;
	a.a = 10;
	printf("%d\n", a.a);

	a.b = 10;
	printf("%f\n", a.b);

	strcpy(a.c, "Ni Hao Ma");
	printf("%s\n", a.c);
}
