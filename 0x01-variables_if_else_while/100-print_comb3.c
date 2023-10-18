#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	for (j = 0; j <=9; j++)
		if (i != j)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
			putchar(',');
		}
			putchar('\n');
			return (0);
}
