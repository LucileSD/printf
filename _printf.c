#include "main.h"
/**
 *_printf - print the input
 *@format: the format of the string
 *Return: the sentence
 */

int _printf(struct print, char *format, ...)
{
	int *s;
	int *traverse;
	va_list args;

	va_start(args, format);

	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			choices[1]._print(s);
			traverse++;
		}
		traverse++;
		while (*traverse = '%')
		{
			if (*traverse + 1 == 'c')
				choices[0]._print(s);
			if (*traverse + 1 == 's')
				choices[1]._print(s);
			if (*traverse + 1 == 'd')
				choices[2]._print(s);
			if (*traverse + 1 == 'i')
				choices[3]._print(s);
		}
	}
	va_end(args);
	return (*traverse);
}
