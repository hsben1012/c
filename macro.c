#include <stdio.h>
#define NUM 10
#define SIZE 20
#define ADD_ONE(x) (x + 1)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SUB(a, b) (a - b)

#define A(x) Value_##x
#define VAL(x,y) x##y

#define B(x) #x

#define COMPARE(a, b, ans) \
	if(a > b) \
	{ \
		ans = 1; \
	} \
	else if(a < b) \
	{ \
		ans = -1; \
	} \
	else \
	{ \
		ans = 0; \
	}

int main()
{
	int aa = NUM;
	printf("%d\n", aa);

	char array[SIZE];
	printf("%d\n", sizeof(array));

	printf("%d\n", ADD_ONE(3));

	printf("%d\n", MAX(10, 20));

	printf("%d\n", SUB(20, 10));

	printf("%d\n", 2 * SUB(20, 10) / 4);

	int A(1) = 10;
	printf("%d\n", Value_1);

	int VAL(a, 1) = 25;
	printf("%d\n", a1);

	char str[]= B(adfasdfasdf);
	printf("%s\n", str);

	int ans, a = 10, b = 15;
	/*
	if(a > b)
	{
		ans = 1;
	}
	else if(a < b)
	{
		ans = -1;
	}
	else
	{
		ans = 0;
	}
	printf("%d\n", ans);
	*/

	COMPARE(a, b, ans)
	printf("%d\n", ans);
}
