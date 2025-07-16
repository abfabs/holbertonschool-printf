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

/**
 * print_number - Recursively prints a long integer
 * @n: Number to print
 *
 * Return: Number of digits printed
 */
int print_number(long int n)
{
	int count = 0;

	if (n / 10)
		count += print_number(n / 10);

	_putchar((n % 10) + '0');
	return (count + 1);
}

/**
 * handle_int - Handles the %d and %i format specifiers
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int handle_int(va_list args)
{
	int n = va_arg(args, int);
	long int num = n;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	count += print_number(num);
	return (count);
}
