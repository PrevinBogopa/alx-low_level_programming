#include "main.h"

/**
 * print_alphabet_x10 - Print 10 alphabets
 */

void print_alphabet_x10(void)
{
	int 10th;
	char alphabets;

	for (alphabets = 0; alphabets < 10; alphabets++)
	{
		for (10th = 'a'; 10th <= 'z'; 10th++)
		{
			_putchar(10th);
		}
		_putchar('\n');
	}
}
