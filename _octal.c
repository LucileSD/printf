#include "main.h"
/**
 * choice_octal : for choose the type octal
 * @args: argument
 * Return:
 */
int choice_octal(va_list args)
{
	return (_print_octal(va_arg(args, int)));
}
