#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>


int _printf(const char *format, ...);
int print_char(va_list lists, char);
int print_string(va_list lists, char);

#endif
