#include "main.h"
#include <stdlib.h>
/**
*print_s - prints a string.
*@s: string.
*Return: number of string.
*/
int print_s(va_list s)
{
    int count;
    char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
