#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets low and up
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	 /*print A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	printf("\n");
	return (0);
}
