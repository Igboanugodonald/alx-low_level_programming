#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of command line arguments
 * @argv: array of comman line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n, %s\n", argc, argv[i]);
	return (0);
}
