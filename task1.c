#include "main.h"


/**
*fun_int - a function print intiger numbers
*@varg: input number
*Return: printed number length
*/


int print_int(va_list list)
{
	int num = va_arg(list, int);
	int l = 0;
	unsigned int neg = num;

	if (num < 0)
	{
		_putchar('-');
		neg *= (-1);
		l++;
	}
	else if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	l += int_recur (neg);
	return (l);
}



/**
*recur - a function calculate number of printed values
*@val: value input
*Return: number of printed values
*/


int int_recur(unsigned int val)
{
	int l;

	if (val == 0)
	{
		return (0);
	}

	l = (1 + int_recur(val / 10));
	_putchar((val % 10) + '0');
	return (l);
}
