#include <stdio.h>
int main()
{
	// single value
	int i_val = 10;
	float f_val = 10.5;
	char c_val = 'a';

	// int array 1-D
	int i_array[5] = {1,2,3,4,5};
	printf("%d %d %d %d %d\n", i_array[0], i_array[1], i_array[2], i_array[3], i_array[4]);
	
	int i_array2[5];
	i_array2[0] = 6;
	i_array2[1] = 7;
	i_array2[2] = 8;
	i_array2[3] = 9;
	i_array2[4] = 10;
	printf("%d %d %d %d %d\n", i_array2[0], i_array2[1], i_array2[2], i_array2[3], i_array2[4]);

	printf("%ld %ld\n", sizeof(i_array), sizeof(i_array2));

	// int array 2-D
	int i_array2d[3][3] = 
	{
		{1, 2, 3}, 
		{4, 5, 6}, 
		{7, 8, 9}, 
	};
	printf("%d %d %d\n%d %d %d\n%d %d %d\n", 
				i_array2d[0][0], i_array2d[0][1], i_array2d[0][2],
				i_array2d[1][0], i_array2d[1][1], i_array2d[1][2],
				i_array2d[2][0], i_array2d[2][1], i_array2d[2][2]);

	int i_array2d2[3][3];
	i_array2d2[0][0] = 10;
	i_array2d2[0][1] = 11;
	i_array2d2[0][2] = 12;
	i_array2d2[1][0] = 13;
	i_array2d2[1][1] = 14;
	i_array2d2[1][2] = 15;
	i_array2d2[2][0] = 16;
	i_array2d2[2][1] = 17;
	i_array2d2[2][2] = 18;

	printf("%d %d %d\n%d %d %d\n%d %d %d\n", 
				i_array2d2[0][0], i_array2d2[0][1], i_array2d2[0][2],
				i_array2d2[1][0], i_array2d2[1][1], i_array2d2[1][2],
				i_array2d2[2][0], i_array2d2[2][1], i_array2d2[2][2]);
	printf("%ld\n", sizeof(i_array2d2));

	// string 1-D
	char str_1D[] = "hello coder!";
	printf("%s\n", str_1D);
	printf("%c %c %c\n", str_1D[0], str_1D[1], str_1D[10]);
	str_1D[3] = 'c';
	printf("%s\n", str_1D);

	// string size
	printf("%ld\n", sizeof(str_1D));

	// string 2-D
	char str_2D[3][4] =
	{
		"abc",
		"def",
		"ghi"
	};
	printf("%s %s %s\n", str_2D[0], str_2D[1], str_2D[2]);

	return 0;
}
