#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	char *s;
	int a, b;

	if (str == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	s = malloc(a * sizeof(*s));
	if (s == 0)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = str[b];
	return (s);
}
