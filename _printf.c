#include "main.h"

/**
 * _printf - print function
 * @format: format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int chr = 0;
	va_list va_li;

	if (format == NULL)
		return (-1);

	va_start(va_li, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chr++;
		}
		else
		{
			format++;

			if (format == "\0" || format == " ")
				return (-1);

			if (*format == '%')
			{
				write(1, format, 1);
				chr++;
			}
			else if (*format == 'c')
			{
				print_char(format, &c);
				chr++;
			}
			else if (*format == 's')
			{
				print_string(format, &str);
				chr += str_len;
			}
		}
		format++;
	}
	va_end(va_li);

	return (chr);
}
