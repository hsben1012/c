#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *src = "PowerPoint";
	char *dst = (char*)malloc(sizeof("PowerPoint"));

	strcpy(dst, src);
	printf("%s\n", dst);

	printf("%ld\n", strlen(dst));

	return 0;
}
