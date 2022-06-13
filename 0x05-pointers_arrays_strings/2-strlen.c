#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: Length.
 */
size_t _strlen(const char *str)
{
	size_t siz = 0;

	while (*str++)
		siz++;

	return (siz);
}
