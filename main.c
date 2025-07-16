#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test _printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Character: %c\n", 'A');
	_printf("Printed %d characters.\n", len);

	len = _printf("String: %s\n", "Hello, World!");
	_printf("Printed %d characters.\n", len);

	len = _printf("Percent sign: %%\n");
	_printf("Printed %d characters.\n", len);

	len = _printf("Null string: %s\n", NULL);
	_printf("Printed %d characters.\n", len);

	len = _printf("Invalid specifier: %g\n");
	_printf("Printed %d characters.\n", len);

	len = _printf("Integer: %d\n", 2025);
	_printf("Printed %d characters.\n", len);

	len = _printf("Integer: %d\n", -2025);
	_printf("Printed %d characters.\n", len);

	len = _printf("Integer: %i\n", 123456789);
	_printf("Printed %d characters.\n", len);

	len = _printf("Integer: %i\n", -123456789);
	_printf("Printed %d characters.\n", len);

	return (0);
}

