#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(int code)
{
	//static char str[64];
	char *space = (char *)malloc(sizeof(char) * 64);
	switch(code)
	{
		case 100:
			/*
			strcpy(str, "case100");
			break;
			*/
			//return "case1000";
			strcpy(space, "case100");
			break;

		case 200:
			/*
			strcpy(str, "case200");
			break;
			*/	
			//return "case2000";
			strcpy(space, "case200");
			break;

		case 300:
			/*
			strcpy(str, "case300");
			break;
			*/
			//return "case3000";
			strcpy(space, "case300");
			break;
	}
	//return str;
	return space;
}

void getStrings(char **ans, int code)
{
	*ans= (char *)malloc(sizeof(char) * 64);
	switch(code)
	{
		case 100:
			strcpy(*ans, "case100");
			break;

		case 200:
			strcpy(*ans, "case200");
			break;

		case 300:
			strcpy(*ans, "case300");
			break;
	}
}

int main()
{
	/*
	char *ans1 = getString(100);
	char *ans2 = getString(200);
	printf("%s\n%s\n", ans2, ans1);
	*/

	char *ans1 = NULL;
	getStrings(&ans1, 100);

	char *ans2 = NULL;
	getStrings(&ans2, 200);
	printf("%s\n%s\n", ans2, ans1);
}
