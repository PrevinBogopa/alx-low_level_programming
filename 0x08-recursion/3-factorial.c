#include "main.h"

/**
 * factorial - find factorial of n
 * @n: number
 * Return: factorial of number or -1 when negative n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
