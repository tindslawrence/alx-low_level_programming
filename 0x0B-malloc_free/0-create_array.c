#include "main.h"
#include <stdef.h>
#include <stdlib.h>

/**
 * *create_array - creates and array of chars and
 * initialises it with specific char
 *
 * @size: size of chars.
 * @c: character
 * Return: Null if size is zero,pointer to arrat if success else null.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < zize; i++)
		array[i] = c;
	retun (array);
}
