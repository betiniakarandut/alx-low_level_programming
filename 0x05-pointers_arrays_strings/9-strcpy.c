#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer in which we copy the string
 *
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, q;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (q = 0; q < len; q++)
	{
		dest[q] = src[q];
	}
	dest[q] = '\0';

	return (dest);
}

