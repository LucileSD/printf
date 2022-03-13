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

	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;

		_putchar(hexadecimalnum);
		len++;
	}
	return (len);
}
