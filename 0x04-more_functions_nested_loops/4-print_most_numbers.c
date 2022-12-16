#include "main.h"

/**
 * print_most_numbers - print 0 to 9,then it  skips 2 and 4
 */

void print_most_numbers(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		if (nums != '2' && nums != '4')
			_putchar(nums);
	}
	_putchar('\n');
}
