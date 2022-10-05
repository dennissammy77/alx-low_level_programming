#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments.
 * @ac: argument count.
 * @av: argument vector
 * Return: pointer of array.
 */
char *argstostr(int ac,char **av)
{
	char *str;
	int x,y,z,i;

	if (ac == 0)
	{
		return (NULL);
	}
	for (x = y = 0;y < ac;y++)
	{
		if (av[y] == NULL)
		{
			return (NULL);
		}
		for (z = 0; av[y][z] != '\0';z++)
		{
			x++;
		}
		x++;

	}
	str = malloc((x+1) * sizeof(char));
	
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (y = z = i = 0; i < x; z++)
	{
		if (av[y][z] == '\0')
		{
			str[i] = '\n';
			x++;
			i++;
			z = 0;
		}
		if (i < x - 1)
			str[i] = av[y][z];

	}
	str[i] = '\0';
	return (str);
}
