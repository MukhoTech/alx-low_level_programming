#include <stdio.h>

/**
*main - A C program that prints alphabets from z to a
*Return: Value 0 (Success)
*/
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar (alp);
	}
	putchar('\n');
	return (0);
}
