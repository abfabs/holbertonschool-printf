#include "main.h"
#include <stdio.h>


int handle_char(va_list args)
{
    char c;

    c = va_arg(args, int);

    putchar(c);
    
    return (1);
}


int handle_string(va_list args)
{   
    unsigned int i;
    char *str;
    str = va_arg(args, char*);

    if str == NULL
    {
        str = "(null)";
    }

    for (i = 0; str[i] != '\0'; i++)
    {

    }
    return (i);
}