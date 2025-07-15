#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * handle_char - Handles the %c format specifier.
 * @args: Argument list.
 *
 * Return: Number of characters printed (always 1).
 */
int handle_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}

/**
 * handle_string - Handles the %s format specifier.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int handle_string(va_list args)
{
	unsigned int i;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
