#include "main.h"

/**
 * string_len - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int string_len(char *s)
{
	int b;

	for (b = 0; s[b] != 0; b++)
		;
	return (b);

}

/**
 * const_string_len - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int const_string_len(const char *s)
{
	int b;

	for (b = 0; s[b] != 0; b++)
		;
	return (b);
}

