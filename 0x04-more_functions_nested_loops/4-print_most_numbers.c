#include "main.h"
/**
 * description
 */
void print_most_numbers(void)
{
	char c:

	for (c = '0' ; c < '10' ; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
