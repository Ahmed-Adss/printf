#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that print input c
 * @c: input to function
 * Return: (0) On Success, (-1) On error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
