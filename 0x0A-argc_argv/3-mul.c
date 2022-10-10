#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc:number arguments.
 * @argv:array of command arguments.
 * Return:0-success.
 */
int main(int argc,char *agv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
