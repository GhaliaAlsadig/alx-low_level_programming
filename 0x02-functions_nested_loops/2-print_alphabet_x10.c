#include "main.h"
/*
 * function - print_alphabet_x10
 * description printx10
 */
void print_alphabet_x10(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar('x');
			_putchar('\n');
			x++;
			}
	}
}
