#include "main.h"

/**
 * print_character - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int print_character(va_list val)
{
	char x;

	x = va_arg(val, int);
	_putchar(x);
	return (1);
}


