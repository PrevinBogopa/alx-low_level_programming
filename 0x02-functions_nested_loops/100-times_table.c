#include "main.h"

/**
 * print_times_table - print multiplication till num
 * @num: argument
 */

void print_times_table(int num)
{
	int y;
	int x;
	int product;

	if (num >= 0 && num <= 15)
	{
		for (y = 0; y <= num; y++)
		{
			for (x = 0; x <= num; x++)
			{
				product = (y * x);
				if (x == 0)
					_putchar('0' + product);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 10) % 10));
						_putchar('0' + (product % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
