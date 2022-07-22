#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of argument passed to a program
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
		(void) av;
			printf("%d\n", (ac - 1));
				return (0);
}
