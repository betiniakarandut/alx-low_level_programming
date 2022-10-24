#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int u, d, n, wid, f, digit;

	u = 0;
	d = 0;
	n = 0;
	wid = 0;
	f = 0;
	digit = 0;

	while (s[wid] != '\0')
		wid++;

	while (u < wid && f == 0)
	{
		if (s[u] == '-')
			++d;

		if (s[u] >= '0' && s[u] <= '9')
		{
			digit = s[u] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[u + 1] < '0' || s[u + 1] > '9')
				break;
			f = 0;
		}
		u++;
	}

	if (f == 0)
		return (0);

	return (n);
}

