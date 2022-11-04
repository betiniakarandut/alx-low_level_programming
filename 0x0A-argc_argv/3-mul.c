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
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
