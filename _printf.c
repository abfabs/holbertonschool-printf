#include "main.h"
#include <stdio.h>

int (*find_handler(char format_char, specifier_t specifiers[]))(va_list)
{
	unsigned int i;

	while (specifiers[i].specifier != NULL)
	{
		if (format_char == specifiers[i].specifier[0])
			return (specifiers[i].handler);
		i++;
	}
	return NULL;
}