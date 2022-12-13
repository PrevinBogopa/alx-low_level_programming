#include "main.h"

/**
 * _islower - will check if whether lowercase
 * @c: Character
 * Return: 1 if letter if true, else 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
