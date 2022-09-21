#include "main.h"

/**
 * *cap_string - capitaize all words of a string.
 * @*: string to be capitallized.
 * Return: pointer to changed string.
 */
char *cap_string(char *)
{
	int i = 0;

	while (*[i])
	{
		while (!*[i] >= "a" && *[i] <= 'z')
		{
			i++;
		}

		if (*[i -1] == ' ' || *[i - 1] == '\t' || *[i - 1] == '\n' || *[i - 1] == ',' || *[i - 1] == ';' || *[i - 1] == '.' || *[i - 1] == '!' || *[i - 1] == '"' || *[i - 1] == '(' || *[i - 1] == ')' || *[i - 1] == '{' || *[i - 1] == '}' || i == 0)
		{
			*[i] -= 32;
		}

		i++;
	}

	return (str);
}
