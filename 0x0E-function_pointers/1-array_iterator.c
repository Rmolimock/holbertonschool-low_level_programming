#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - performs a given function on each element of an array
 *@array: array on which to perform given function
 *@size: size of the array
 *@action: function to be performed on the array
 *
 *Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (size--)
	{
		action(array[i]);
		i++;
	}
}
