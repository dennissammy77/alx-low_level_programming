#include <stdio.h>

/**
 * main-Entry point
 *
 * description-prints alphabet in lowercase followed by an ew line
 *
 * Return:Always(0) success
 *
 */

int main(void)
{
	int ch;

	for(ch = 'a'; ch <='z'; ch++)
	
		if(ch != 'e' || ch != 'q')
			putchar(ch);			
			putchar('\n');
	
		return (0);
}
