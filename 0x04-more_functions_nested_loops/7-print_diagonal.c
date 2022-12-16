#include "main.h"

/**
 * print_diagonal - print character "\" at n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int draw;
	int spaces;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (spaces = 1; spaces < draw; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
