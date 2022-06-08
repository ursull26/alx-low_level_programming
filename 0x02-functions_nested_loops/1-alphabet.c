#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: print_alphabet
 * Return: void
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
