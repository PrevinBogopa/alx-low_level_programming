#include "main.h"

/**
 * print_square - print a square of the given size
 * @size: size to draw
 */

void print_square(int size)
{
	int y, x;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x= 1; x <= size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
