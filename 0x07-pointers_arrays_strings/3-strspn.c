#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				bytes++;
				break;
			}

			else if (accept[x + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}

