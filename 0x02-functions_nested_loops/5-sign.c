#include "main.h"

/**
 *print_sign - prints the sign of the number
 *@n: checks the number
 *Return: return 1 if the number is positive and
 *-1 if the number is negative
 *  and 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
