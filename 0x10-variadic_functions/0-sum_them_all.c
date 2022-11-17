#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: int parameter to check
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		if (n != 0 && n != '\0')
		{
			sum += va_arg(list, int);
		}
		va_end(list);

		return (sum);
	}
}
