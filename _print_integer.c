#include "main.h"
/**
 * _print_integer - prints the string with integers
 * @n: integer to print
 * Return: lenght
 */
int _print_integer(int n)
{
	int d, u;
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
		if (n > 0 && n < 10)
		{
			_putchar(n);
			len++;
		}
		if (n >= 10 && n <= 99)
			for (d = n % 10; d <= 1;)
			{
				for (u = n / 10; u < 10;)
				{
					_putchar(d);
					_putchar(u);
					len++;
				}
			}
	}
	return (len);
}
