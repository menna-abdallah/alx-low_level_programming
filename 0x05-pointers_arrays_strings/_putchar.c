#include <unistd.h>

/**
 * _putchar - write the cha c to stdout
 * @c : the char to print
 *
 * Return : on success 1
 * on error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
