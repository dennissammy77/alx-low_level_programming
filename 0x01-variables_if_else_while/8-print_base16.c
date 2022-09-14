#include <stdio.h>

/**
 * main - Entry point
 *
 * description - prints all numbers of base 16 in lowercase
 *
 * Return: Always(0) success
 *
 * */

int main(void)
{
	int n;
	char x;

	for (n=0 ; n <=10 ; n++)
		putchar((num % 10) + '0');

	for (x='a' ; x <= 'f' ; x++)
	       putchar(x);

	putchar('\n');

	return(0);
}

