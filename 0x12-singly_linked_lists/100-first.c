#include <stdio.h>

/**
 * bmain - func executed mefore main.
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
