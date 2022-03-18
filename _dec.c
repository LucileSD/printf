#include "main.h"
/**
 * choice_int - function for integer
 * @args: argument
 * Return
 */
int choice_dec(va_list args)
{
	return (_print_dec(va_arg(args, int)));
}
