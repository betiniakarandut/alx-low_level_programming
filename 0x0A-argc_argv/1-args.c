#include <main.h>
#include <stdio.h>
/**
 * main - Function that prints the number of
 * arguments passed to it.
 * @argc: Number of elements in the array of argv[]
 * @argv[]: Array of argc
 */
int main(int argc, char *argv[] __attribut__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
