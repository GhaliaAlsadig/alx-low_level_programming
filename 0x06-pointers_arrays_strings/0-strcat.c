#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (srt[j] != '\0')
	{
		dest[i] = srt{j};
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
