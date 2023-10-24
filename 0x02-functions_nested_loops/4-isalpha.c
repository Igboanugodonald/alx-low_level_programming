#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameters to be used
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'a') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
