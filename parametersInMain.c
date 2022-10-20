#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	/*
	printf("%d\n", argc);
	for(int i = 0; i < argc; i++)
	{
		printf("[%d] = %s\n", i, argv[i]);
	}
	*/

	/*
	char ch;
	printf("optind = %d\n", optind);
	printf("optind = %d\n", optind);
	while((ch = getopt(argc, argv, "a:i")) != EOF)
	{
		printf("optind = %d\n", optind);
		switch(ch)
		{
			case 'i':
				puts("Do STH.");
				break;
			case 'a':
				printf("command a %s\n", optarg);
		}
	}
	*/
	
	char ch;
	char buffer[20];
	FILE *fp = NULL;
	while((ch = getopt(argc, argv, "rw:")) != EOF)
	{
		switch(ch)
		{
			case 'w':
				fp = fopen("/home/ben/tmp", "w");
				fwrite(optarg, sizeof(char), strlen(optarg), fp);
				fclose(fp);
				break;
			case 'r':
				fp = fopen("/home/ben/tmp", "r");
				if(fp == NULL)
				{
					puts("File not found.");
					return 0;
				}
				memset(buffer, 0, sizeof(buffer));
				fread(buffer, sizeof(char), sizeof(buffer), fp);
				printf("%s\n", buffer);
				fclose(fp);
				break;
		}
	}
}
