#include "main.h"
/**
 * in_hexc - convert int to HEXAdecimal
 * @lists: number to print
 * Return: value
 */
int in_hexc(va_list lists)
{
	unsigned long int num = va_arg(lists, unsigned long int);

	return (print_hexc(num));
}
/**
 * print_hexc - print HEXAdecimal
 * @val: input number to check
 * Return: length
 */
int print_hexc(unsigned long int val)
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
			len = (1 + print_hexc(val / 16));
			_putchar((val % 16) + '0');
		}
		else
		{
			len = (1 + print_hexc(val / 16));
			_putchar((val % 16) + 55);
		}
	}
	return (len);
}
