#include "main.h"

int strlen_no_wildcard(char *str);
void iterate_wildcard(char **wildstring);
char *compare_match(char *str, char *compare);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wildcard - Returns the length of a string,
 * ignoring wildcard characters.
 * @str: The string to be measured.
 * Return: The length.
 */
int strlen_no_wildcard(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wildcard(str + index);
	}

	return (len);
}

/**
 * iterate_wildcard - Iterates through a string located at a wildcard
 * until it points to a non-wildcard character.
 * @wildstring: The string to be iterated through.
 */
void iterate_wildcard(char **wildstring)
{
	if (**wildstring == '*')
	{
		(*wildstring)++;
		iterate_wildcard(wildstring);
	}
}

/**
 * compare_match - Checks if a string str matches the postfix of
 * another string potentially containing wildcards.
 * @str: The string to be matched.
 * @compare: The compare.
 * Return: If str and compare are identical - a pointer to the null byte
 * located at the end of compare.
 * Otherwise - a pointer to the first unmatched character in compare.
 */
char *compare_match(char *str, char *compare)
{
	int str_len = strlen_no_wildcard(str) - 1;
	int compare_len = strlen_no_wildcard(compare) - 1;

	if (*compare == '*')
		iterate_wildcard(&compare);

	if (*(str + str_len - compare_len) == *compare && *compare != '\0')
	{
		compare++;
		return (compare_match(str, compare));
	}

	return (compare);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 * Return: If the strings can be considered identical - 1.
 * Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wildcard(&s2);
		s2 = compare_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
