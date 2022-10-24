#include "main.h"
#include <stdout.h>

/**
 * _puts - Function that prints a string, followed by a 
 * new line, to stdout
 *
 * @str: Character pointer to check
 */

void _puts(char *str)
{
	int ch;

	for (ch = 0; ch != '\0'; ch++)
	{
		_putchar(str[ch]);
	}

	_putchar('\n');
}
