#include <stdio.h>
/**
 * main -  prints its name, followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array that contains the ccommand line argument
 *
 * Return: Always (0) successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
