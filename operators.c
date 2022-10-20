#include <stdio.h>
int main()
{
	/*
	int a = 10;

	//a = a + 1;
	//a = a + 5;
	//a += 1;
	//a += 5;
	//a++;
	++a;

	//printf("%d\n", ++a);
	//printf("%d\n", a++);
	printf("%d\n", a);
	*/

	/*
	float x = 10, y = 3;
	float ans = x / y;
	printf("%f\n", ans);
	*/

	/*
	long long timestamp = 94489284537;
	unsigned int timestamp_ms = (unsigned int)timestamp;
	//printf("long long: %d bytes\n", sizeof(long long));
	//printf("unsigned int: %d bytes\n", sizeof(unsigned int));
	printf("timestamp = %u\n", timestamp_ms);
	*/

	/*
	//unsigned int a = 10, b = 6;
	int b = 10;
	b = b >> 2;
	printf("%d\n", b);
	*/

	// bits mask
	unsigned short hex = 0x55aa;
	unsigned short bits9 = 0x01 << 9;
	hex = hex | bits9;
	printf("ans = %x\n", hex);
	hex = hex & ~bits9;
	printf("ans = %x\n", hex);
}
