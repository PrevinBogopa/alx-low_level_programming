#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @num: the nummmm of that sign
 * Return: be 1 if >0 ,0 if=0 and -1 if >0
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return ('0');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
