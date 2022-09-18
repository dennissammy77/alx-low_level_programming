#include <stdio.h>

/**
 * main -Entry point.
 *
 * description - prints sum of multiplesof 3 and 5.
 *
 * Return: Always(0) success.
 */

int main(void)
{
		int i,sum;

			sum = 0;

				for (i = 0; i < 1024; i++ )
						{
									if ((i % 3) == 0 || (i % 5) == 0)
													sum += i;
										}
					printf("%d\n", sum);

						return(0);
}
