#include <unistd.h> 
#include "main.h" 
/**
 * _putchar - writes the char c to stdout 
 * @c: char to printed
 * return: on success 1 else -1  
 */
int _putchar(char c)
{
	return (write(1, &c , 1));
}
