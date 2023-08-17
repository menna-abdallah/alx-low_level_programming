#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers
 *		starting with 1 and 2
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		prints("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			print(", ");
	}

	return (0);
}
