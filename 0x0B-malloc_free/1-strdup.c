#include "main.h"
#include <stdio.h>
/**
 * *_strdup - Function that returns a pointer to a newly
 * allocated space in memory which contain a copy of the string
 * given as a parameter.
 * 
 * @str: Character to check and duplicate.
 *
 * Return: Pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length;

	length = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}

