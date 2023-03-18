#include <stdio.h>

/**
*main - A C program that prints all possible combinations of singl digits
*Return: Value 0 (Success)
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar (x);
		if (x != '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
