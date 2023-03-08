#include "main.h"

/**
 * _puts_recursion - program to print a string
 * @s: This is the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');
}
