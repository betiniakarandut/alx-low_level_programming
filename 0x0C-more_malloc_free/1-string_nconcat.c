#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * 
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int i = 0, j = 0, wid = 0, wid2 = 0;

	while (s1 && s1[wid])
		wid++;
	while (s2 && s2[wid2])
		wid2++;

	if (n < wid2)
		b = malloc(sizeof(char) * (wid + n + 1));
	else
		b = malloc(sizeof(char) * (wid + wid2 + 1));

	if (!b)
		return (NULL);

	while (i < wid)
	{
		b[i] = s1[i];
		i++;
	}

	while (n < wid2 && i < (wid + n))
		b[i++] = s2[j++];

	while (n >= wid2 && i < (wid + wid2))
		b[i++] = s2[j++];

	b[i] = '\0';

	return (b);
}
