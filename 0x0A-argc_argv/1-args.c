#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: counts the command ine argument
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
