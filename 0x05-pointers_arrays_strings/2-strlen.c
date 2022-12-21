#include "main.h"

/**
 * _strlen - returns the length of nthe  string
 * @s: the string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
