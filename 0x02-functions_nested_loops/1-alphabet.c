#include "main.h"

/**
 * main - Prints alphabets
 *
 * Description: desc
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alx;
	for (alx = 'a'; alx <= 'z'; alx++)
	{
		_putchar (alx);
	}
	_putchar('\n');
}
