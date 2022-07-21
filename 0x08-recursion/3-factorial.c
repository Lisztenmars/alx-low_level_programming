#include "main.h"

/**
 *int factorial(int n)  returns the factorial of a given number.
 * @n: number to return the factorial from
 *
 * Return: -1 iif n is lower than 0, return factorial otherwise.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}
