#include <stddef.h>

/**
 * int_index - search for integer in array via function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function
 * Return: index where integer's found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);

}
