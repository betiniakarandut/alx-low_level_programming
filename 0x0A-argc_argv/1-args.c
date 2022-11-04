#include <stdio.h>
#include <main.h>
/**
 * main - Function that prints the number of
 * arguments passed to it.
 * @argc: Number of elements in the array of argv[]
 * @argv[]: Array of argc
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
