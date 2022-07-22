#include "main.h"

/** _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of time to copy char 
 *
 * return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
		while (n)
				{
							s[n - 1] = b;
									n--;
										}
			return (s);

}
