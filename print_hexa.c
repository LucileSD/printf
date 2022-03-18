#include "main.h"
/**
 * print_hexa - convert decimal in hexadecimal
 *
 */

int print_hexa(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m,sum;
	char diff;
	int count;
	
	m = 268435456;/*(16 ^ 7)*/

	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
			_putchar('0' + a[i]);
			else
			_putchar('0' + diff + a[i]);
			count++;
		}
	}
	return (count);
}
