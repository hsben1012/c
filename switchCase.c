#include <stdbool.h>
#include <stdio.h>
int main()
{
	/*
	int score;
	scanf("%d", &score);
	switch(score)
	{
		case 10:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		default:
			printf("C\n");
			break;
	}
	*/

	int age;
	scanf("%d", &age);

	/*
	if(age <10 || age > 100)
	{
		printf("請輸入正確年齡\n");
		return 0;
	}

	if(age > 0 && age < 13)
	{
		printf("兒童票\n");
	}
	else if(age < 65)
	{
		printf("成人票\n");
	}
	else
	{
		printf("敬老票\n");
	}
	*/
	switch(age)
	{
		case -10000 ... 0:
		case 101 ... 9999:
			printf("請輸入正確的年齡\n");
			break;
		case 1 ... 12:
			printf("兒童票\n");
			break;
		case 13 ... 64:
			printf("成人票\n");
			break;
		default:
			printf("敬老票\n");
	}
}
