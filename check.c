#include "main.h"
/**
 * check_for_specific_character - check the character
 * @param format
 * @return int(*)(va_list)
 */

int (*check_for_specific_character(const char *format))(va_list)
{
	unsigned int i;

	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_i},
		{"o", print_o},
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
