#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the charecter c to stdout
 * @c: the char to print
 * return: on success 1 else -1
 */
int _putchar(char c)
	return (write(1, &c, 1));
