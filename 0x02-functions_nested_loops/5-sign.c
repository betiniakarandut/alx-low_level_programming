#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: Character to check
 * Return:prints 1 for +, 0 for 0 and -1 for
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
