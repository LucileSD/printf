#include "main.h"
/**
 * _print_integer - porints the string with integers
 * @n: integer to print
 * Return: lenght
 */
int _print_integer(int n)
{
	int i;
	int j;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * (-1);
			len++;
		}
		for (i = 0, n > 0, i++)
		{
			n = n / 10;
		}
		for (j = 1, i > 1, i--)
		{
			j = j * 10;
		}
		for (, j > 0, len++)
		{
			_putchar((n / j) % 10 + '0');
			j = j / 10;
		}
	}
	return (len);
}
