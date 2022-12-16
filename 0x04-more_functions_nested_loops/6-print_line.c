#include "main.h"

/**
 * print_line - prints "_" certain times n to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int certain = n;

	for (certain = n; certain > 0; certain--)
		_putchar('_');

	_putchar('\n');
}
