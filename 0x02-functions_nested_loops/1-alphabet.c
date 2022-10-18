#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 * print_alphabet - void
 */
void print_alphabet(void);
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		_putchar(lt);
	}

	_putchar('\n');
	return (0);
}
