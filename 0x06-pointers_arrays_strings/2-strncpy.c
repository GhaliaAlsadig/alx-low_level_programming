#include "main.h"
/**
 * _strncpy - copys a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
