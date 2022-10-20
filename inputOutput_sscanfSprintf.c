#include <stdio.h>
int main()
{
	/**/
	char str[5];
	int dec;
	float pi;
	//scanf("%f", &pi);
	
	/*
	// sscanf
	char input[20] = "abc 10 3.1415";
	sscanf(input, "%s%d%f", str, &dec, &pi);
	//printf("scanf=>printf: %s %d %f\n", str, dec, pi);
	//printf("sscanf=>printf: %s\n", input);
	*/

	// ssprintf
	char output[80];
	sprintf(output, "Value of pi = %f\n", pi);
	printf("%s\n", output);

	return 0;
}
