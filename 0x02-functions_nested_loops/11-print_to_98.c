#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @num: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num++;
		}
	}
	else if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
