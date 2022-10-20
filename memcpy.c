#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int src[] = {1, 2, 3, 4, 5, 6};
	int *dst = (int *)malloc(sizeof(int) * 4);

	memcpy(dst, src + 2, sizeof(int) * 4);
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n", dst[i]);
	}

	char *strSrc = "Fucking Hell!";
	char strDst[20];
	memcpy(strDst, strSrc, strlen(strSrc));
	printf("%s\n", strDst);

	free(dst);
	return 0;
}
