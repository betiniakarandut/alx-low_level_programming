#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, m;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[x + m] != needle[m])
				break;
		}
		if (!needle[m])
			return (&haystack[x]);
	}
	return (NULL);
}

