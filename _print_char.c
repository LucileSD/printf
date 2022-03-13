#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _char - print's a character.
 * @c: charactere to print.
 * 
 * Return: number od char printed.
 */
int _print_char(va_list c)
{
    char ch = (char)va_arg(c, int)

    _putchar(ch);
    return(1); 
}