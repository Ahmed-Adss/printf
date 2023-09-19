#include "main.h"

/**
 * print_char - prints a char
 *
 *
 *
 * Return: number of char printed
 */

int print_char(va_list lists, char)
{
	char c = va_arg(lists, int);
	write(1, &c, 1);
}

/**
 * print_string - prints a string
 * @lists: list of argument
 *
 * Return: numbers of char printed
 */

int print_string(va_list lists, char)
{
	char *str = va_arg(lists, char*);
	int str_len = 0;

	while (str(str_len) !=  '\0')
		str_len++;

	write(1, str, str_len);
}
