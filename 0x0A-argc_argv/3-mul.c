#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: contains the number of arguments
 * @argv: an array of the number of arguments
 * Return: Error if argc != 3
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	{
	printf("%d\n", result);
	return (0);
	}
}
