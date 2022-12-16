#include "main.h"

/**
 * print_triangle - prints traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int y;
	int x;
	int draw;

	if (size <= 0)
		_putchar('\n');

	for (y = 1; y <= size; y++)
	{
		for (x = 1; x <= (size - y); x++)
			_putchar(' ');

		for (draw = 1; draw <= y; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
