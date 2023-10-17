#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
		char _alphabet = 'a';

		while (_alphabet <= 'z')
		{
			putchar(_alphabet);
			_alphabet++;
		}
		putchar('\n');
		return (0);
}
