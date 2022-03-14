#include "main.h"
/**
 * _print_dec - percent i choose the good format
 *
 */
int _print_dec(int *array, int n)
{
	int i;
	int decimal = 0, rem;

	for (i = 0; i < n; i++)
	{
		if (array[0] == '0' && array[1] == 'x') /*hexa*/
		{
			return (_print_hexa);
		}
		if (array[0] == '0' && array[1] < 7) /*octal*/
		{
			_putchar(array[0]);
			array++;
			while (n != 0)
			{
				rem = n % 10;
				_putchar(rem);
				n /= 10;
				decimal += rem * pow(8, i);
				++i;
			}
		}
		if (array[0] < 10 && array[0] != '0')
		{
			return (_print_integer); /*decimal*/
		}
	}
}
