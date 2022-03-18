#include "main.h"
#include <stdlib.h>
/**
 * @print_s - prints a string.
 * @s: string.
 *
 * Return: number of char printed.
 */
int _print_string(va_list s)
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
