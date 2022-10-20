#include <stdbool.h>
#include <stdio.h>
int main()
{
	// boolean
	bool is_true = true;
	printf("%d\n", is_true);
/*
	// >
	int a = 10;
	is_true = a > 5;
	printf("%d\n", is_true);

	// >=
	a = 10;
	is_true = a >= 10;
	printf("%d\n", is_true);

	// ==
	int b = 10;
	is_true = b == 10;
	printf("%d\n", is_true);

	// !=
	int c = 10;
	is_true = c !=5;
	printf("%d\n", is_true);
	
	// &&
	is_true = (a < 11 && a > 5);
	printf("%d\n", is_true);
*/
	// ||
	int a = 10;
	is_true = (a < 9 || a > 5);
	printf("%d\n", is_true);

	return 0;
}
