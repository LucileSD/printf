#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
/**
 *struct type - define the structures for choose the good argument
 *@_print: function  who prints the good function
 *@f: the function
 */
typedef struct type
{
	char *_print;
	void (*f)(va_list);
} type_t;
int _print_integer(int n);
int _putchar(char c);
int _print_octal(int n);
int _print_hexa(int i);
int _printf(const char *const format, ...);
int _print_char(va_list c);
int _print_string(va_list s);
#endif
