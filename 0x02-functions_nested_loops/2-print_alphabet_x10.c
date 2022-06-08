#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: a-z 10 times
 */
void print_alphabet_x10(void)
{
	char alx;
	int i=0;

	while (i < 10)
	{
		for (alx ='a'; alx <= 'z'; alx++)
		{
			_putchar (alx);
		}
		i++;
		_putchar('\n');
	}
}
