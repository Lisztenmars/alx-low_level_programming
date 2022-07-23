#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that return a pointer to duplicate a string
 * @str: pointer to a string
 *
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *la;
	
	if (str == '\0')
		return (0);
	while (str[i] != '0')
		i++;
	i++;
	la = malloc(i * sizeof (char));
	if (j = 0; j < i; j++)
		la[j] = str[j];
	la[j] = '\0';
	return (la);
}
