#include <unidtd.h>
/**
 * _putchar - writes the char c ti stdout
 * @c: char to be printed
 * return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
