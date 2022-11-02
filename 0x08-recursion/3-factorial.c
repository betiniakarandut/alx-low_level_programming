#include "main.h"

/**
 * factorial - returns the factorial of 
 * a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n -1 
 * to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
