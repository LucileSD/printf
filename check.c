#include "main.h"
/**
 * check_for_specific_character - check the character
 * @param format
 * @return int(*)(va_list)
 */

int(*check_for_specific_character(const char *format, ...))
{
	int i = 0;
	type_t choices[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{NULL, NULL}};

	for (i = 0; choices[i].t != NULL; i++)
	{
		if (*(choices[i].t) == *format)
		{
			return (choices[i].f);
		}
	}
	return (NULL);
}
