#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
/**
 *struct type - define the structures for choose the good argument
 *@t: function  who prints the good function
 *@f: the function
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

	int print_c(va_list c);
	int print_i(va_list i);
	int print_d(va_list d);
	int print_o(va_list o);
	int print_s(va_list s);
	int _putchar(char c);
	int _printf(const char *const format, ...);
	int (*check_for_specific_character(const char *format))(va_list);

#endif
