#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar while using int vars
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert to ASCII*/
		putchar(digit + '0');
		digit++;
	}
	printf("\n");

	return (0);
}
