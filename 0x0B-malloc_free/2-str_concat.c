#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The string to be concatenated upon
 * @s2: The string to be concatenated to s1
 *
 * Return: If concatenation fails - NULL
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int x, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		concat_str[concat_index++] = s1[x];

	for (x = 0; s2[x]; x++)
		concat_str[concat_index++] = s2[x];

	return (concat_str);
}
