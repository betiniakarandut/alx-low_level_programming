#include "main.h"

/**
 * print_last_digit - Function to print last
 * digit of a number
 * @k: Character to check
 * Return: Returns the last value of the
 * number
 */
int print_last_digit(int k)
{
	int retval;

	retval = k % 10;

	if (retval < 0)
	{
		retval = -retval;
	_putchar(retval + '0');
	}

	return (retval);
}
