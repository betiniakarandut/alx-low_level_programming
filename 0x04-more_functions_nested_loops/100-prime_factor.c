#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
	long int i;

	n = 612852475143;
	max = -1;

int main(void)
{
	long int n;
	long int max;
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= (n**0.5); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	printf("%ld\n", max);

	return (0);
}

