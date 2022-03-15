#include "main.h"
/**
 *_printf - print the input
 *@format: the format of the string
 *Return: the sentence
 */
static int (*check_for_specific_character(const char *format))(va_list)
{
	unsigned int;
	int i;
	int *p;
	type_t choices[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{NULL, NULL}};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}
int _printf(const char *const format, ...)
{

	int i;
	char *s;
	char *traverse;
	va_list args;
	type_t choices[];

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
	return (traverse);
}
