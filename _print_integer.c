#include "main.h"
/**
 * _print_integer - prints the string with integers
 * @args: arguments
 * Return: lenght
 */
int _print_integer(va_list args)
{
	int d, u, n;

	int len = va_arg(args, int);

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
			_putchar(len);
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
