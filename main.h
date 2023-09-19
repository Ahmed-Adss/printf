#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct form - structure name for used to get symbols and its functions.
 * @specifier: Input symbol
 * @print: function pointer
 */
typedef struct form
{
	char specifier;
	int (*print)(va_list lists);
} prtmt;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list lists);
int print_string(va_list lists);
int print_int(va_list varg);
int print_mod(va_list lists);
int recur(unsigned int val);
int oct_rec(unsigned int num);
int print_oct(va_list list);
int prbin(unsigned int val);
int print_bin(va_list lists);
int in_hex(va_list lists);
int print_hex(unsigned long int val);
int print_unsign(va_list lists);
int calc_len(unsigned int val);
int in_hexc(va_list lists);
int print_hexc(unsigned long int val);
#endif
