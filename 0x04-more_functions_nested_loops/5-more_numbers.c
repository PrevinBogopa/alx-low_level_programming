#include "main.h"

/**
 * more_numbers - cout 0 to 14 ten times
 */

void more_numbers(void)
{
	char n;
	int counts;

	for (counts = 1; counts <= 10; counts++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n / 10 > 0)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
