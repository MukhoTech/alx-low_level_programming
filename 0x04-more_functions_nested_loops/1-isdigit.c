#include "main.h"

/**
 * _isdigit - checks if a charecter is digit
 * @x: the number to be checked
 * Return: 1 for a charecter that will be a digit 0 any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
