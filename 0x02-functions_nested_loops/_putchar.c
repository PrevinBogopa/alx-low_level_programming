#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character to c stdout
 * @c: the character is going to show
 * Return :if success then 1,else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
