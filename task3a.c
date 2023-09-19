#include "main.h"
/**
 * in_hex - convert int to hex
 * @lists: num to print
 * Return: value
 */
int in_hex(va_list lists)
{
	unsigned long int num = va_arg(lists, unsigned long int);
	int l = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (num > 0)
		{
			int res = num % 16;

			if (res < 10)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar (res - 10 + 'a');
			}
			num /= 16;
			l++;
		}
	}
	return (l);
}
