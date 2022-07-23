#include "main.h"
#include <stdio.h>

/**
 * create_array - function that creates an array reserving a spacein the memory
 * @size: the size of the array
 * @c: string to it insite of new array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *la = malloc (size * sizeof (char));

	if (la == '\0')
		return (0);
	for (i = 0: i < size; i++)
	{
		la[i] = c;
	}
	return (la);
}
