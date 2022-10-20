#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack(1)
typedef struct
{
	int id;
	char name[7];
}Zoo;
#pragma pack

typedef struct
{
	unsigned int a: 2;
	unsigned int b: 1;
	unsigned int c: 3;
}Bits;

typedef struct
{
	int d1;
	float d2;
}Data;

int main()
{
	/*
	Zoo z1 = {0, "Donkey"};
	Zoo *zPtr1 = &z1;
	printf("%d %s\n", (*zPtr1).id, (*zPtr1).name);
	printf("%d %s\n", zPtr1 ->id, zPtr1 ->name);
	*/

	/*
	Zoo z[3] = {{1, "Dog"},{2, "Rabbit"},{3, "Lion"}};
	Zoo *zPtr2 = z;
	for(int i = 0; i < sizeof(z) / sizeof(Zoo); i++)
	{
		printf("%d %s\n", zPtr2[i].id, zPtr2[i].name);
		printf("%d %s\n", (zPtr2 + i) ->id, (zPtr2 + i) ->name);
	}
	*/

	/*
	printf("%d\n", sizeof(Zoo));
	
	unsigned char data[] = {1, 0, 0, 0, 68, 111, 103, 2, 0, 0, 0, 82, 97, 98, 98, 105, 116, 3, 0, 0, 0, 76, 105, 111, 110};

	Zoo *zPtr = data;

	zPtr ->id = 100;
	strcpy(zPtr ->name, "Turtle");

	printf("%d %s\n", zPtr ->id, zPtr ->name);
	*/

	/*
	int test = 59;
	Bits *bits = &test;

	bits ->b = 1;
	bits ->c = 2;
	printf("%d\n", *bits);
	*/

	 Data *data = (Data *)malloc(sizeof(Data) * 2);
	 data[0].d1 = 4;
	 data[0].d2 = 12.34;

	 data[1].d1 = 34;
	 data[1].d2 = 12.34;
}
