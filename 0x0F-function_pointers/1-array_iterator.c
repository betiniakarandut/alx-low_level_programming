#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: pointer to an int
 * @size: variable to check size of array
 * @action: pointer to the function used
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (!array || !action)
		return;

	for (z = 0; z < size; z++)
		action(array[z]);
}
