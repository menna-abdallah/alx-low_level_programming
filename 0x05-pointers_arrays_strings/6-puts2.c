#include "main.h"

/**
 * puts2 - prints every char of string
 *
 * @str: string parameter input
 *
 * return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar(str[i]);
}
