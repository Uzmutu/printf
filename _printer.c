#include "main.h"
/**
 * replace_t - function that one part of the following code to fit betty style
 * @f: given char
 * @p: givent int
 *
 * Return: return void
 */
void replace_t(char f, int p)
{
	_putchar(f);
	p++;
}
/**
 * printer - Receives the string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg: A list containing all the argumentents passed to the program.
 *
 * Return: A total count of the characters printed.
 */
int printer(const char *format, conver_t f_list[], va_list arg)
{
	int i;
	int j;
	int value;
	int printed;

	printed = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					value = f_list[j].f(arg);
					if (value == -1)
						return (-1);
					printed += value;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed = printed + 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
			replace_t(format[i], printed);
	}
	return (printed);
}
