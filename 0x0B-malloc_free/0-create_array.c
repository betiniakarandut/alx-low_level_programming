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
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(sizeof(char)* size);

	if (arr == 0)
	{
		return (0);
	}
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
