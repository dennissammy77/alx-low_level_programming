#include "main.h"

/**
 * _isupper - Entry point.
 *
 * description - checks for uppercase character.
 *
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
