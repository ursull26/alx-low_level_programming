#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * r = row, col = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int r, col, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		
		for (col = 1; col <= 9; col++)
		{
			d = (r * col);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_pputchar(' ');
			}
		}
		_putchar('\n');
	}
}

