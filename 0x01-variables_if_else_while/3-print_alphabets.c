#include <stdio.h>

/**
 * main - A C program that Lower, and uppercase alphabets
 * Return: value 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
