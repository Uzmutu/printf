#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that print
 * @format: formated string to print
 * @...: variable number of argument
 *
 * Description: Function that print a formatted string according to
 * different given flag
 *
 * Return: return an output of the string
 */
int _printf(const char *format, ...)
{
	int printed;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	printed = printer(format, f_list, arg);
	va_end(arg);
	return (printed);
}
