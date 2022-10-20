#include <stdio.h>

int y = 1;

void foo()
{
	static int x = 4;
	int z = 10;

	/**/
	x++;
	y++;
	z++;
	printf("Static x: %d, Global y: %d, Local z: %d\n", x, y, z);
	printf("Static x: %p, Global y: %p, Local z: %p\n", &x, &y, &z);
	
	/*
	int *x_ptr = &x, *y_ptr = &y, *z_ptr = &z;

	(*x_ptr) ++;
	(*y_ptr) ++;
	(*z_ptr) ++;

	printf("Static x: %p, Global y: %p, Local z: %p\n", x_ptr, y_ptr, z_ptr);
	printf("Static x: %d, Global y: %d, Local z: %d\n", *x_ptr, *y_ptr, *z_ptr);
	*/
}

int main()
{
	foo();
	//foo();
	//printf("foo = %p, main = %p\n", &foo, &main);
	//printf("foo = %p, main = %p\n", foo, main);
}
