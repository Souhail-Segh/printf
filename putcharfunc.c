#include "main.h"
#include <unistd.h>

/**
* _putchar - Function that writes a single character c.
* @c: the character to print.
* Return: 1 if succed, -1 if failed.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
