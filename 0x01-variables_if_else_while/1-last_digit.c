#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
		int m;
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		m = n % 10;

		if (n % 10 > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, m);
		else if (n % 10 == 0)
			printf("Last digit of %d is %d and is 0\n", n, m);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
		return (0);
}
