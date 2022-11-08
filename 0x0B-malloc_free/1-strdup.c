#include "main.h"
#include <stdio.h>
/**
 * *_strdup - Function that returns a pointer to a newly
 * allocated space in memory which contain a copy of the string
 * given as a parameter.
 * 
 * @str: Character to check and duplicate.
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
