#include "main.h"

/**
 * _isdigit - Entry point.
 *
 * description - checks for a digit 0 throogh 9.
 *@c os a random character
 * returns 1 if c is  a digit otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	return (0);
}	
