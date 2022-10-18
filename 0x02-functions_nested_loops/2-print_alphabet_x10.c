#include "main.h"

/**
 * print_alphabet_x10() - Function that prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num;
	char ch;

	for (num = 0; num <= 10;)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
	num++;
}
