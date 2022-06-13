#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 * of an array of integers.
 * @a: The array of integers.
 * @n: The number of element to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
