#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor
 * Return: value 0 success
 * sqrt - prints the square root of the number
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
		maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
