#include <stdio.h>

/**
 * main - Entry point,
 *
 * description - prints sum of fibonnacci numbers.
 *
 * Return -: Always(0) success.
 */

int main(void)
{
		float tot_sum;
			unsigned long fib1 = 0, fib2 = 1, fibsum;

				while (1)
						{
									fibsum = fib1 + fib2;
											if (fibsum > 4000000)
															break;

													if ((fibsum % 2) == 0)
																	tot_sum += fibsum;

															fib1 = fib2;
																	fib2 = fibsum;
																		}

					printf("%.0f\n", tot_sum);
						
						return (0);
}
