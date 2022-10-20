#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints op_codes.
 * @argc:number of arguments.
 * @argv:array of arguments.
 * Return: (0) success.
 */
int main(int argc,char *argv[])
{
	int bytes,i;
	char array;

	if (argc != 2)
	{
		printf("Err\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0 )
	{
		printf("Err\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0;i < bytes;i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n",array[i]);
			break;
		}
		printf("%02hhx\n",array[i]);
	}
	return (0);
}
