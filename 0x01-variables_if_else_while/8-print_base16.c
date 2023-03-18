#include <stdio.h>

/**
*main - A C program that prints all the numbers of base 16 in lowercase
*Return: Value 0 (Success)
*/

int main(void)
{
	int x;
	char alp;

	for (x = '0'; x <= '9'; x++)
	putchar (x);
	for (alp = 'a'; alp <= 'f'; alp++)
	putchar (alp);
	putchar ('\n');

	return (0);
}
