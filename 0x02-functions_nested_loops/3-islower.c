#include "main.h"
/**
 * function - main
 * description print islower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
