#include "main.h"
/**
 * in_hex - convert int to hex
 *
 * @lists: num to print
 * Return: value
 */
int in_hex(va_list lists)
{
	unsigned long int num = va_arg(lists, unsigned long int);

	if (num > 0)
	{
		return (print_hex(num));
	}
	else
	{
		_putchar('0');
		return (1);
	}
}
/**
 * print_hex - func to print hex
 * @val: input number to check
 * Return: length
 */
int print_hex(unsigned long int val)
{
	int len = 0;

	if (val == 0)
	{
		return (0);
	}
	else
	{
		if ((val % 16) <= 9)
		{
			len = (1 + print_hex(val / 16));
			_putchar((val % 16) + '0');
		}
	}
	return (len);
}
