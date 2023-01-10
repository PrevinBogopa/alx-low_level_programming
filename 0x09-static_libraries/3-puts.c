#include "main.h"

/**
 * _puts - printsout the string
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
