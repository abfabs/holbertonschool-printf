#include <limits.h>
#include <stdio.h>
#include "main.h"

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
	len = _printf("Integer: %d\n", -2025);
	len = _printf("Integer: %i\n", 123456789);
	len = _printf("Integer: %i\n", -123456789);

	return (0);
}
