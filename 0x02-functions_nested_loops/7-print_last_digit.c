#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: parameter to be used
 * Return: j
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
