#include "main.h"
/**
 * choice_int - function for integer
 * @args: argument
 * Return
 */
int choice_int(va_list args)
{
	return (_print_integer(va_arg(args, int)));
}
