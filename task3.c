#include "main.h"

/**
*print_oct - a function to ptint octal number
*@list: input number
*Return: printed value
*/
int print_oct(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);

	return (oct_rec(num));
}
/**
 * oct_rec - a function print octal number
 * @num: input number
 * Return: length of printed number
 */
int oct_rec(unsigned int num)
{
	int l = 0;

	if (num == 0)
	{
	_putchar('0');
	return (1);
	}
	if (num / 8 == 0)
	{
	_putchar((num % 8) + '0');
	l++;
	}
	else
	{
		l = (1 + oct_rec(num / 8));
		_putchar((num % 8) + '0');
	}
	return (l);
}
