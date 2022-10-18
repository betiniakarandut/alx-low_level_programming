#include "main.h"

/**
 * print_alphabet_x10() - Function that prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char ch;
	ch = 'a';

	while (num <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
	num++;
}
