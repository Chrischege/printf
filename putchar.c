#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints a character
 * return: char c
 * @c: character to be printed
 * Return: char c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
