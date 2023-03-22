#include "main.h"

/**
 * _abs - compute the absalute value of the number
 * @c: the number to be computed
 * Return: return number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
