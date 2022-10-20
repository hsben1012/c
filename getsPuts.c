#include <stdio.h>
int main()
{
	/* gets */
	char str[50];
	gets(str);
	// scanf("%s", str);
	printf("out = %s\n", str);

	/* puts */
	char str1[] = "I LUV You!";
	printf("%s", str1);
	puts(str1);

	return 0;
}
