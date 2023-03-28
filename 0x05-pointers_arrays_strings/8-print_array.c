#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array of intergers
 * @n: number of elements of an array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
