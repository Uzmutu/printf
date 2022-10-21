#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	char buffer[1024];
	register int i;

	i = 0;
	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
