#include <stdio.h>

typedef enum 
{
	saturday,
	sunday,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	
	MAX
}DAY;

int main()
{
	//printf("%d\n", tuesday);
	DAY today = thursday;
	printf("%d\n", today);

	char toDo[][20]=
	{
		"eat",
		"sleep",
		"sing",
		"swim",
		"hang out",
		"jump"
	};

	printf("%s\n", toDo[wednesday]);

	for(int i = 0; i < MAX; i++)
	{
		printf("%s\n", toDo[i]);
	}
}
