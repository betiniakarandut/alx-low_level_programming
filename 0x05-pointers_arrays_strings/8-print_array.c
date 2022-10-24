#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		if (q == 0)
			printf("%d", a[q]);
		else
			printf(", %d", a[q]);
	}
		printf("\n");
}

