#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} conver_t;
int _printf(const char *format, ...);
int printer(const char *format, conver_t f_list[], va_list arg_list);
int _putchar(char);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
#endif
