#include <stdio.h>

/**
 * main - A program that prints all possible
 * combinations of two two-digit numbers
 * Return: Value 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
	{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(' ');
	putchar((y / 10) + '0');
	putchar((y % 10) + '0');
	if (x == 98 && y == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
