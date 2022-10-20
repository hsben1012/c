#include <stdio.h>
int main()
{
	/* fgets v.s. gets
	char str[50];
	fgets(str, 50, stdin);
	//gets(str);
	printf("out = %s\n", str);

	// input: abc def
	printf("%c %d %d\n", str[6], str[7], str[8]);
	*/

	/* fputs v.s. puts */
	char str1[] = "I love coding.";
	//puts(str1);
	fputs(str1, stdout);
	char str2[] = "And you?";
	//puts(str2);
	fputs(str2, stdout);

	return 0;
}
