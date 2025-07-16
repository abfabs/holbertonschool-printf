#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct specifier - Struct to match format with handler
 * @specifier: The format string
 * @handler: The function to handle the format
 */
typedef struct specifier
{
	char *specifier;
	int (*handler)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_char(va_list args);
int handle_string(va_list args);

int (*find_handler(char format_char, specifier_t specifiers[]))(va_list);
int process_format(const char *format, va_list args, specifier_t specifiers[]);

int handle_int(va_list args);
int print_number(long int n);


#endif /* MAIN_H */
