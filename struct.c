#include <stdio.h>

struct Student
{
	char name[20], major[20];
	int age;
};

struct School
{
	char name[20];
	float PR;
	struct Student student;
};

typedef struct Position3D
{
	float x, y, z;
}Position3D;

typedef struct
{
	char color[20];
	int gears, height;
}Bike;

typedef struct
{
	int number, speed;
	Bike b;
}Transportation;

void show_student(struct Student people)
{
	printf("name: %s, major: %s, age: %d\n", people.name, people.major, people.age);
}

typedef struct
{
	int a;
	char b, c;
}Size1;

typedef struct
{
	char b;
	int a;
	char c;
}Size2;

typedef struct
{
	 
}Size3;

typedef struct
{
	unsigned char bit0: 1; 
	unsigned char bit1: 1; 
	unsigned char bit2: 1; 
	unsigned char bit3: 5; 
	unsigned char bit4: 1; 
	unsigned char bit5: 1; 
	unsigned char bit6: 1; 
	unsigned char bit7: 5; 
	
}BitfieldChar;

int main()
{
	BitfieldChar three_byte;
	//three_byte.bit2 = 1;
	//three_byte.bit4 = 1;
	//three_byte.bit0 = 256;
	three_byte.bit7 = 31;
	printf("%d\nbit: %d\n%ld bytes\n", three_byte, three_byte.bit7, sizeof(three_byte));

	/*
	struct Student Hank = {"Hank", "CS", 20};
	printf("%s\n", Hank.name);
	printf("%s\n", Hank.major);
	printf("%d\n", Hank.age);

	Hank.age = 35;
	printf("%d\n", Hank.age);

	show_student(Hank);

	struct School NTU = {"NTU", 99.5, {"Ben", "ME", 29}};
	//printf("%s\n", NTU.name);
	//printf("%f\n", NTU.PR);

	strcpy(NTU.student.name, "Alex");
	NTU.student.age = 35;

	printf("%s\n", NTU.student.name);
	//printf("%s\n", NTU.student.major);
	printf("%d\n", NTU.student.age);

	Position3D p = {10.5, 20, 30.5};
	printf("%f, %f, %f\n", p.x, p.y, p.z); 

	Bike b = {.gears = 21, .height = 17};
	printf("%d, %d\n", b.height, b.gears);

	Transportation t = {1, 10, {.height = 15}};
	printf("%d %d %d\n", t.number, t.speed, t.b.height);

	printf("%ld %ld\n", sizeof(Size1), sizeof(Size2));

	char one_byte = 0x00;
	one_byte |= (0x01 << 2) | (0x01 << 3);
	printf("%d\n", one_byte);
	*/

}
