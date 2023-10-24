#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: parameter to be used
 * Return: Always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
		return (i);
}
