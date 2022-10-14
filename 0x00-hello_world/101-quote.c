#include <stdio.h>
#include <unistd.h>
/*
description:' '
main - Entry point
description:' '
Return: Always 0 (Success)
description:' '
     */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
