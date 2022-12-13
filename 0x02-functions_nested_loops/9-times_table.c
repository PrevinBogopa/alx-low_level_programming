#include "main.h"

/**
 * times_table - Print timetable
 */

void times_table(void)
{
	int y;
	int x;
	int product;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			product = (y * x);

			if (x == 0)
			{
				_putchar('0' + product);
			}

			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
