#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print's a character.
 * @c: charactere to print.
 * 
 * Return: 1.
 */
int print_c(va_list c)
{
    char ch = (char)va_arg(c, int);

    _putchar(ch);
    return(1); 
}