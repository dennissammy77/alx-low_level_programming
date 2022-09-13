#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main-Entry point
 *
 * description - last digit
 *
 * Return: Always(0) success
 *
 * */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if(n > 5)
						printf("Last digit is %d and is greater than 5\n",n);
					if(n == 0)
						printf("Last digit is %d and is 0\n",n);
					if(n < 6 && n != 0)
						printf("Last digit is %d and is less than 6 and not 0\n",n);
					/* your code goes there */
					return (0);
}
