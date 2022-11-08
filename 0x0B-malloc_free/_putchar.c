#include "main.h"
/**
 * _putchar - Function that writes c to standard
 * output.
 *
 * @c: Character to check and write
 *
 * Return: 1 on success. -1 if it fails and
 * Errno set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
