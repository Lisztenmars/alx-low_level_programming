#include "main.h"

/**
 * _power_recursion - returns the value of x raises to the power of y
 * @x: base.
 * @y: exponent.
 *
 * Return: value of the exponentiation
 */
int _power_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _power_recursion(x, y - 1));
}
