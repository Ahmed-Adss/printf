#include "main.h"
/**
 * print_unsign - printing the in value
 * @lists: input num to check
 * Return: len of num
 */
int print_unsign(va_list lists)
{
	unsigned int num = va_arg(lists, int), len = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len += recur(num);
	return (len);
}
/**
 * calc_len - calculate the len
 * @val: input num
 * Return: len of num
 */
int calc_len(unsigned int val)
{
	int len;

	if (val == 0)
	{
		return (0);
	}
	len = (1 + calc_len(val / 10));
	_putchar((val % 10) + '0');
	return (len);
}

