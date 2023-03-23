#include <stdio.h>

/**
 * main - prints all the sum of multiples of 5 and 3 upto 1024
 * Return: always 0 (Success)
 */

int main(void)
{
	int i, x = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	x += i;
	}
	i++;
	}
	printf("%d\n", x);
	return (0);
}
