#include "main.h"
/**
 * choice_hexa : for choose the type hexadecimal
 * @args: argument
 * Return:
 */
int choice_hexa(va_list args)
{
	return (_print_hexa(va_arg(args, int)));
}
