#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - this will allocate memory using malloc
 * @b: size to mgive the alloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *potr;

	potr = malloc(b);

	if (potr == NULL)
		exit(98);

	return (potr);
}
