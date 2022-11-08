#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, wid;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			wid++;
		wid++;
	}

	str = malloc(sizeof(char) * (wid + 1));

	if (str == NULL)
		return (NULL);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}

	return (str);
}

