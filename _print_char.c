#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _char - print's a character.
 * @c: charactere to print.
 * 
 * Return: always 1.
 */
int _print_char(va_list c)
{
    char ch = (char)va_arg(c, int)

    _putchar(ch);
    return(1);
}

/**
 * @print_s - prints a string.
 * @s: string.
 * 
 * Return: number of char printed. 
 */
int _print_s(va_list s)
{
    int i;
    char *str = va_arg(s, char *);

    if (str == NULL)
    {
        str = "(null)";
    }
    for (i = 0; str[i]; i++)
    {
        _putchar(str[i]);
    }
    return (i);
}