#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if true else 0 when  false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
