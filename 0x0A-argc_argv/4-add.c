#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @r: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *r)
{
	int i, j, k, len, fun, digit;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	fun = 0;
	digit = 0;

	while (r[len] != '\0')
		len++;

	while (i < len && fun == 0)
	{
		if (r[i] == '-')
			++j;

		if (r[i] >= '0' && r[i] <= '9')
		{
			digit = r[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			fun = 1;
			if (r[i + 1] < '0' || r[i + 1] > '9')
				break;
			fun = 0;
		}
		i++;
	}

	if (fun == 0)
		return (0);

	return (k);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sumtotal, n, x, y, z;

	sumtotal = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		n = _atoi(argv[z]);
		if (n >= 0)
		{
			sumtotal += n;
		}
	}

	printf("%d\n", sumtotal);
	return (0);
}
