#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[] = {1, 2, 4};
	int b[] = {1, 2, 4};

	printf("%d\n", memcmp(a, b, sizeof(a)));
}
