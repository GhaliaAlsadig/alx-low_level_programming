#include <unistd>
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
