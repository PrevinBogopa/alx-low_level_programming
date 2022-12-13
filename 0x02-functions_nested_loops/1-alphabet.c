#include "main.h"

/**
 * main - check the code
 * print_alphabets - print alphabets in lowercase
 * Return: Always 0
 */

void print_alphbet(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z' ; alphabets++)
	{
		_putchar(alphabets);
		_putchar('\n');
	}
}
