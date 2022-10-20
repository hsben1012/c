#include <stdbool.h>
#include <stdio.h>
int main()
{
	/*
	bool is_true = true;
	if(is_true)
	{
		printf("True OK!!\n");
	}

	bool is_false = false;
	if(!is_false)
	{
		printf("False OK!!\n");
	}
	*/

	int age;
	scanf("%d", &age);

	if(age <10 || age > 100)
	{
		printf("請輸入正確年齡\n");
		return 0;
	}

	/*
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
	age > 0 && age < 13 ? printf("兒童票\n") : age < 65 ? printf("成人票\n") : printf("敬老票\n");

	/*
	char c;
	int a = 10;
	if(a > 15)
	{
		c = 'T';
	}
	else
	{
		c = 'F';
	}
	printf("%c\n", c);
	//c = a > 15 ? 'T' : 'F';
	//printf("%c\n", c);
	*/

	/*
	int array[] = {1, 2, 3, 4, 5};
	int index, a, getNum;
	scanf("%d", &a);
	//index = a > 15 ? 0 : 1;
	//getNum = array[index];
	getNum = array[a > 15 ? 0 : 1];
	printf("%d\n", getNum);
	*/
}
