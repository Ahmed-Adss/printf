#include "main.h"
/**
 * print_rev - print string in reverse
 * @lists: argument to print
 * Return: len
 */
int print_rev(va_list lists)
{
	char *str = va_arg(lists, char *);
	int x = 0, len = 0;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		while (str[len] != '\0')
		{
			len++;
		}
		for (x = (len -1) ; x >= 0 ; x--)
		{
			_putchar(str[x]);
		}
	}
	return (1);
}
