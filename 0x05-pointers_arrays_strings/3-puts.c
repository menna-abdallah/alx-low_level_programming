#include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
