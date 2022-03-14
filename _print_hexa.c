#include "main.h"
/**
 * _print_hexa - convert decimal in hexadecimal
 *
 */

int _print_hexa(int i)
{
	long decimalnum, quotient, remainder;
	int j = 0;
	char hexadecimalnum[100];
	int len;

	quotient = decimalnum;

	_putchar('0');
	_putchar('x');

	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = '0' + remainder;
		else
			hexadecimalnum[j++] = '7' + remainder;
		quotient = quotient / 16;

		_putchar(hexadecimalnum);
		len++;
	}
	return (len);
}
