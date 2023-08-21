#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int container;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (container = length; container > 0; container--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
