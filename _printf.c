#include "main.h"
/**
 * _printf - print function
 * @format: format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list va_li;
	int len = 0, i = 0, j;
	prtmt format_func[] = { {'c', print_char}, {'s', print_string},
	{'%', print_mod}, {'d', print_int}, {'i', print_int}, {'o', print_oct}, {'b', print_bin}, };
	if (format == NULL || (format[i] == '%' && (format[i + 1] == '\0')))
		return (-1);

	va_start(va_li, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		} else
		{
			i++;
			for (j = 0 ; j < 7 ; j++)
			{
				if (format[i] == format_func[j].specifier)
				{
					len += format_func[j].print(va_li);
					break;
				}}
			if (j >= 5)
			{
				i--;
				_putchar(format[i]);
				len++;
			}}
		i++;
	}
	va_end(va_li);
	return (len);
}
