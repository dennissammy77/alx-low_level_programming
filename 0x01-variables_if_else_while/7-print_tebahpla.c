#include <stdio.h>

/**
 * main-Entry point
 *
 * description - prints lowercase aplhabet in reverse,followed by a new line
 *
 * Return: Always(0) success
 *
 * */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch ++)
		putchar(ch);
		putchar('\n');
	return(0);
}
