#include "main.h"
/**
 * _print_i - prints the string with integers
 * @i: argument
 * Return: lenght
 */
int print_i(va_list i)
{
	unsigned int m;
	int n, j, k, len = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		len++;
	}
	m = n;
	k = 0;
	while (m / 10 > 0)
	{
		m /= 10;
		k++;
	}
	m = n;
	while (k != 0)
	{
		for (j = 0; j < k; j++)
		{
			m /= 10;
		}
		m %= 10;
		_putchar(m + '0');
		len++;
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
	len++;
	return (len);
}
