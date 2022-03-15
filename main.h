#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
/**
 *struct type - define the structures for choose the good argument
 *@t: function  who prints the good function
 *@f: the function
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} type_t;

int _print_integer(va_list args);
int _putchar(char c);
int _printf(struct type_t choices, char *format, ...);
int _print_char(va_list c);
int _print_string(va_list s);
static int (*check_for_specific_character(const char *format, ...))(va_list);
#endif
