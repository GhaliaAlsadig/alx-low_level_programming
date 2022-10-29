#include "main.h"
/**
 * _strcmp - compares two strinhs values
 * @s1: string 1
 * @s2: string 2
 * return: difference in length
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
