#include "main.h"

/**
 * print_bin - func to convert integer to bin
 *
 * @lists: number to print
 * Return: value
 */
int print_bin(va_list lists)
{
	unsigned int num = va_arg(lists, unsigned int);

	if (num > 0)
	{
		return (prbin(num));
	}
	else
	{
		_putchar('0');
		return (1);
	}
}
/**
 * prbin - print binary
 * @val: input number to check
 * Return: length
 */
int prbin(unsigned int val)
{
	int len = 0;

	if (val == 0)
	{
		return (0);
	}
	else
	{
		len = (1 + prbin(val / 2));
		_putchar((val % 2) + '0');
	}
	return (len);
}
