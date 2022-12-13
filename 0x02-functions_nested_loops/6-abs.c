#include "main.h"

/**
 * _abs - makes absolute value of the interger
 * @g: The interger
 * Return: The value
 */
int _abs(int g)
{
	if (g > 0)
		return (g);
	else if (g < 0)
		return (-g);

	return (0);
}
