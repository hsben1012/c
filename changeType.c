#include <stdio.h>
int main()
{
	//short to int
	short s_1 = 10;
	int i_1 = (int)s_1;
	printf("%d\n", i_1);

	//int to short
	int i_2 = 10;
	short s_2 = (short)i_2;
	printf("%d\n", s_2);

	//overflow
	int i_3 = 32768;
	short s_3 = (short)i_3;
	printf("%d\n", s_3);
	
	//signed to unsigned
	int i_4 = -15;
	unsigned short us = (unsigned short)i_4;
	printf("%d\n", us);

	//float to double
	float f_1 = -10.5;
	double d_1 = (double)f_1;
	printf("%f\n", d_1);

	//double to float
	double d_2 = 10.5;
	float f_2 = (float)d_2;
	printf("%f\n", f_2);

	//overflow
	double d_3 = 3.4e38;
	float f_3 = (float)d_3;
	printf("%lf\n", d_3);

	//int to float
	int i_5 = 10;
	float f_4 = (float)i_5;
	printf("%f\n", f_4);

	//float to int
	float f_5 = 10.15;
	int i_6 = (int)f_5;
	printf("%d\n", i_6);

	return 0;
}
