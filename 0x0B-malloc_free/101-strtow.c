#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int betini, x, y;

	betini = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			betini = 0;
		else if (betini == 0)
		{
			betini = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *temp;
	int i, k = 0, len = 0, word, c = 0, begin, stop;

	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (word + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				stop = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (begin < stop)
					*temp++ = str[begin++];
				*temp = '\0';
				mat[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}

	mat[k] = NULL;

	return (mat);
}
