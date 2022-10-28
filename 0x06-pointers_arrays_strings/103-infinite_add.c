#include "main.h"

/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 *
 * Return: the summed string in r. If r is too small for the result,
 * return 0;
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int rem = 0, position = 0, position2;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[position] = *s2 - '0' + *s1 + rem;
		rem = 0;
		if (r[position] > '9')
		{
			rem++;
			r[position] -= 10;
		}
		position++;
		s2--;
		s1--;
		if (size_r == position && (s1 != n1 - 1 || s2 != n2 - 1 || rem == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[position] = *s1 + rem;
		rem = 0;
		if (r[position] > '9')
		{
			rem = 1;
			r[position] -= 10;
		}
		s1--;
		position++;
		if (size_r == position && (s1 != n1 - 1 ||  rem == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[position] = *s2 + rem;
		rem = 0;
		if (r[position] > '9')
		{
			rem = 1;
			r[postion] -= 10;
		}
		s2--;
		position++;
		if (size_r == position && (s2 != n2 - 1 || rem == 1))
			return (0);
	}
	if (rem == 1)
	{
		r[position] = '1';
		r[position + 1] = 0;
	}
	else
	{
		r[position--] = 0;
	}
	position2 = 0;
	while (position2 <= position)
	{
		rem = r[position];
		r[position] = r[position2];
		r[position2] = rem;
		position--;
		position2++;
	}
	return (r);
}
