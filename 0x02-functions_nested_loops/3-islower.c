#include "main.h"
/**
 * function - main
 * description print islower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1);
	} else
	{
		_putchar(0);
	}
}
