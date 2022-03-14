#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>


typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int choice_int(va_list args);
int _print_integer(int n);
int _putchar(char c);
int choice_octal(va_list args);
int _print_octal(int n);
int choice_hexa(va_list args);
int _print_hexa(int i);
#endif
