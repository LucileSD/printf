#include "main.h"
/**
 *_printf - print the input
 *@format: the format of the string
 *Return: the sentence
 */

int _printf(const char *format, ...)
{
	
	unsigned int i = 0;
	int sum = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			sum++;
		}
		if (!format)
			return (sum);
		f = (*check_for_specific_character(&format[i+1]));
		if (f != NULL)
		{
			sum += f(args);
			continue;
		}
		if (!format[i + 1])
			return (-1);
	}
	va_end(args);
	return (sum);
}