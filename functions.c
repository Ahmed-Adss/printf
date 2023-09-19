#include "main.h"

/**
 * print_char - prints a char
 *
 *
 *
 * Return: number of char printed
 */
int print_char(va_list lists)
{
	_putchar(va_arg(lists, int));
	return (1);
}
/**
 * print_string - prints a string
 * @lists: list of argument
 *
 * Return: numbers of char printed
 */
int print_string(va_list lists)
{
	int i;
	char *str = va_arg(lists, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0 ; str[i] ; i++)
	{
		_putchar(str[i]);
	}
	return (strlen(str));
}
/**
 * print_mod - print modular symbol
 * @lists: input percent to check
 * Return: (1) always 1 to success
 */
int print_mod(va_list lists)
{
	(void) lists;
	_putchar('%');
	return (1);
}
