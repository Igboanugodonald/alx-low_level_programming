#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array of characters
 *
 * @c: this will store the strings of character
 * @size: input for the size of the array in int
 *
 * Return: pointer to the base character c
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
