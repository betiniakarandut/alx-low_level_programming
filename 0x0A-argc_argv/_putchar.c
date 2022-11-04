#include <unistd.h>
/**
 * _putchar - Function that prints char c
 * to standard output
 * @c: Char character to check and print
 * Return: Write to standard output &c
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
