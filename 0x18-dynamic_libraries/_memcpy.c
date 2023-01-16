#include "main.h"
#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	printf("%c%c%d", *dest, *src, n);
}
