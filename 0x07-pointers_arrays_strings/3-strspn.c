#include 'main.h'

/**
 * _strspn - funvtion that get length of prefix substring.
 * @*s: number of bytes initial segment.
 * @*accept: subtring.
 * Return - number of strings.
 */
unsigned int _strspn(char *s,char *accept)
{
	unsigned int bytes = 0;
	int i;

	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);

		}
		s++;
	}
	return (bytes);
}
