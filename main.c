#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    printf("Characters: %c %c \n", 'a', 65);
    _printf("Characters: %c %c \n", 'a', 65);
    _printf("Decimals: %d\n", 1977);
    printf("Decimals: %d\n", 1977);
    printf("%d\n", printf("Characters: %c %c \n", 'a', 65));
    printf("%d\n", _printf("Characters: %c %c \n", 'a', 65));

    return (0);
}
