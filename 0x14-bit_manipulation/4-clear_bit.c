#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num of i
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occur.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 0 at index (...11011...) to work on that index */
	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
