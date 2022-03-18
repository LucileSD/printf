#include "main.h"
/**
 *_printf - print the input
 *@format: the format of the string
 *Return: the sentence
 */

int _printf(const char *const format, ...)
{
	const char *traverse;
	int i = 0;
	int sum = 0;
	va_list args;

	va_start(args, format);

	for (traverse = format; traverse[i] != '\0'; i++)
	{
		if (traverse[i] == '%' && traverse[i + 1])
		{
			i++;
			sum += check_for_specific_character(traverse[i])(args);
		}
		else
		{
			sum += _putchar(traverse[i]);
		}
	}
	va_end(args);
	return (sum);
}
