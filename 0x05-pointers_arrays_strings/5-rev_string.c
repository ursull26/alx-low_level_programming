#include "main.h"

/**
 * rev_string - Reverses a string.
 * @str: string to be reserved.
 */
void rev_string(char *str)
{
	int i = 0, x = 0;
	char tmp;

	while (str[i++])
		x++;

	for (i = x - 1; i >= x / 2; i--)
	{
		tmp = str[i];
		str[i] = str[x - i - 1];
		str[x - i - 1] = tmp;
	}
}
