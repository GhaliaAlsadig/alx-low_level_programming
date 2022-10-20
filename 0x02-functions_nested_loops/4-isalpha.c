#include "main.h"
/**
 * _isalpha checks for char alphabet
 * @c: is a char to br checked
 *
 * return:1 if char is a letter upper or lower , 0: otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
