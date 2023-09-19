#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct form
{
	char specifier;
	int (*print)(va_list lists);
} prtmt;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list lists);
int print_string(va_list lists);

#endif
