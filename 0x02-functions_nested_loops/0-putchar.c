#include <unistd.h>

/**
 * _putchar - This program will print character.
 * Return: Always 1 if success else -1.
 * @v: the character that is going to print out
 */
int _putchar(char v)
{
	return (write(1, &v, 1));
}
