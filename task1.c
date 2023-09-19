#include "main.h"


/**
*fun_int - a function print intiger numbers
*@varg: input number
*Return: printed number length
*/


int fun_int(va_list varg)
{
	int num = va_arg(varg, int);
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

	l += recur(neg);
	return (l);
}



/**
*recur - a function calculate number of printed values
*@val: value input
*Return: number of printed values
*/


int recur(unsigned int val)
{
	int l;

	if (val == 0)
	{
		return (0);
	}

	l = (1 + recur(val / 10));
	_putchar((val % 10) + '0');
	return (l);
}
