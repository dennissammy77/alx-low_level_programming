#include "main.h"

/**
 * islower- checks for lowercase charachter.
 * @c: The charahter to be checked.
 *
 * Return: 1 if charachter is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
