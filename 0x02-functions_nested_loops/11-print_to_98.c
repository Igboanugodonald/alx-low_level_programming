#include "main.h"
#include <stdio.h>

/**
 *  print_to_98 - prints natural numbers
 *  @n: parameter
 *  Return: void
 */

void print_to_98(int n)
{
	for (n = 0; n<=98; n++)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
