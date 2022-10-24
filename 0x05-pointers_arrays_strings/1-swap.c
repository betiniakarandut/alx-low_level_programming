#include "main.h"

/**
 * swap_int - Function that swaps value of two integers.
 *
 * @*a: Character pointer to check
 *
 * @*b: Character pointer to check
 *
 * Return: Swap values of any int variable
 */
void swap_int(int *a, int *b)
{
	*a = 45;
	*b = 90;

	if (*a)
	{
		*b = *a;
	}
	else if (*b)
	{
		*a = *b;
	}
}
