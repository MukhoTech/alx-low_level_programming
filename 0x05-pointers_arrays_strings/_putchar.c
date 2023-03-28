#include <unistd.h>

/**
 * _putchar - writes the character c to start
 * @c: The character to print
 * return: on success 1.
 * On error, -1 is returned.
 */

int _putchar(char C)
{
	return (write(1, &C, 1));
}
