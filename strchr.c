#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *haystack = "You are so beautiful";
	char c = 'e';
	char *findChar= strchr(haystack, c);
	printf("%s\n", findChar);
	printf("%c\n", haystack[findChar - haystack]);

	return 0;
}
