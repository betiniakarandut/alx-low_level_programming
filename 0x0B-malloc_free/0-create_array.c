#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Function that creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: Unsigned int to check
 * @c: Character to check
 *
 * Return: A pointer to the array,
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char arr[];

	if (size == 0)
	{
		return (NULL);
	}

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		_putchar(c);
	}
	_putchar('\n');
	return (1);
}
