#include "main.h"
/**
 * _print_octal - prints the string with octal
 * @n: octal to print
 * Return: lenght
 */
int _print_octal(int n)
{
	int i = 1, octal = 0;
	int rem;
	int len;

	while (n != 0) /* fonction pour convertir décimal à octal */
	{
		rem = n % 8;
		n /= 8;
		octal += rem * i;
		i *= 10;
		_putchar(octal);
		len++;
	}
	return (len);
}
