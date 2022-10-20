#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[50] = "This is one";
	char *str2 = "This is two";
	strcat(str1, str2);
	printf("%s\n", str1);

	return 0;
}
