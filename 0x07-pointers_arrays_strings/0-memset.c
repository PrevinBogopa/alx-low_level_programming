#include "main.h"

/**
 * _memset - fill number bytes of memory with con value
 * @s: pointer to memory
 * @b: con value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	if (size > 0)
	{
		int i;
		for (i = 0; i < size; i++)
		     *(s + i) = b;
	}
	return (s);
}
