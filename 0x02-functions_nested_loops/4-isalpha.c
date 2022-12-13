i#include "main.h"

/**
 * _isalpha - Will for alphabets
 * @c: the character to check
 * Return: 1 if letter ,else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
