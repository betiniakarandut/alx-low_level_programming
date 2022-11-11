#inclcude "main.h"
/**
 * _putchar - Function that write c to standard output
 * Return: 1 on success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
