#include "main.h"

/**
 * _isalpha() - Function to check alphabetic
 * character
 * @c: Character to check
 * Return: Return 1 for success and
 * 0 for otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
