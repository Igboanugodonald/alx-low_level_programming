#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	char letters = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (letters <= 'Z')
	{
		putchar(letters);
		letters++;
	}
		putchar('\n');
		return (0);
}
