#include "main.h"
/**
 * print_number - prints a number send to this function
 * @arg: arguments
 *
 * Return: The number of arguments printed
 */
int print_number(va_list arg)
{
	int i;
	int div;
	int length;
	unsigned int sum;

	i  = va_arg(args, int);
	div = 1;
	length = 0;

	if (i < 0)
	{
		length += _putchar('-');
		sum = i * -1;
	}
	else
		sum = i;

	for (; sum / (div > 9); )
		div *= 10;

	for (; div != 0; )
	{
		length += _putchar('0' + sum / div);
		sum %= div;
		div /= 10;
	}

	return (length);
}
/**
 * print_integer - Prints an integer
 * @arg: arguments
 *
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list arg)
{
	int num_length;

	num_length = print_number(arg);
	return (num_length);
}
