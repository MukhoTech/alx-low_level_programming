#include <stdio.h>

/**
 * swap_int - the function that swaps the values of two intergers
 * @a: First integer to be swaped
 * @b: Second integer to be swaped
 * Return:  nothing
 */
void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
