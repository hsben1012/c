#include <stdio.h>

#define SWITCH 0

#define NAME "Cute Coder"
int main()
{
	#if SWITCH == 1
		printf("Yes\n");
	#else
		printf("No\n");
	#endif

	#ifndef NAME
		puts("Please enter you name");
	#else
		printf("%s\n", NAME);
	#endif

	return 0;
}
