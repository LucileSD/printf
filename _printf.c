#include "main.h"

/**
 * check_for_specific_character - check if there is a specifique format.
 * @format: format.
 * 
 * Return: Pointer to function else NULL.
 */
static int (*check_for_specific_character(const char *format))(va_list)
{
    unisgned int;
    print_t p[] ={
        {"c", print_c},
        {"o", print_o},
        {"i", print_i},
        {"s", print_s},
        {"d", print d},
        {NULL, NULL}
    };

    for (i = 0; p[i].t != NULL; i++)
    {
        if(*(p[i].t) == *format)
        {
            break;
        }
    }
    return(p[i].f);
}
int _printf(const char *format, ...)
{
    unsigned int = 0, count = 0;
    va_list valist;
    int (*f)(va_list);

    if (format == NULL)
        return (-1);
    va_start(format == NULL);

    while (format[i])
    {
        for (; format[i] != '%' && format[i]; i++)
        {
            _putchar(format[i]);
            count++;
        }
        if (!format[i])
            return (count);
        f = check_for_specific_character(&format[i + j]);

        if (f != NULL)
        {
            count += f(valist);
            i += 2;
            continue;
        }
        if (!format[i + 1])
        {
            return (-1);
            _putchar (format[i]);
            count++;
        }
        if (format[i + 1] == '%')
            i += 2;
        else
            i++;
    }
    va_end(va_list);
    return (count);
}