#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *haystack = "You are so beautiful";
	char *needle = "So";
	char *findStr = strstr(haystack, needle);
	printf("%s\n", findStr);

	return 0;
}
