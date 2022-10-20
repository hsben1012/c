#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char uchar;
typedef unsigned int unit32;

typedef char * String;

#define ASSIGN_STRING(x, s) strcpy(x, #s)
int main()
{
	uchar ch = 's';
	printf("%c\n", ch);

	unit32 a = 255;
	printf("%d\n", a);

	String s = (String)malloc(50);
	//strcpy(s, "Hello Coder");
	ASSIGN_STRING(s, Hello Coder);
	printf("%s\n", s);
}
