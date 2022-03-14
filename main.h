#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>


int choice_int(va_list args);
int _print_integer(int n);
int _putchar(char c);
int choice_octal(va_list args);
int _print_octal(int n);
int choice_hexa(va_list args);
int _print_hexa(int i);



int _printf(const char *format, ...);
int int _print_char(va_list c);
int _print_s(va_list s);
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

#endif