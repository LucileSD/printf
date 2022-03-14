#include "main.h"
/**
 *
 *
 */
int _printf(const char *const format, ...)
{
	type_t choices[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{NULL, NULL}};

	int i;
	char *s;
	char *traverse;

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
			{
				choices[0]._print(s);
			}
			if (*traverse + 1 == 's')
			{
				choices[1]._print(s);
			}
			if (*traverse + 1 == 'd')
			{
				choices[2]._print(s);
			}
			if (*traverse + 1 == 'i')
			{
				choices[3]._print(s);
			}
		}
	}
	va_end(args);
	return (traverse);
}
