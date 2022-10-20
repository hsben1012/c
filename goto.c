#include <stdio.h>
int main()
{
	/*
	int a  = 10, b = 20;
	if(a < b)
	{
		goto point;
	}
	else
	{
		goto point2;
	}
point:
	printf("point\n");
	return 0;
point2:
	printf("point\n");
	*/

	int i = 0;
LOOP:
	printf("%d\n", i);
	if(i < 10)
	{
		i++;
		goto LOOP;
	}
}
