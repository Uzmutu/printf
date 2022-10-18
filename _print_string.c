#include "main.h"
/**
 * print_char - Prints character
 * @arg: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_str - Prints a string
 * @arg: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */
int print_str(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);
	if (!str)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
