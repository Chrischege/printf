#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int display_pointer(va_list val);
int print_unsigned_int(va_list args);
int print_hexadecimal_extra(unsigned long int num);
int const_string_len(const char *s);
int print_HEXADECIMAL_extra(unsigned int num);
int print_execute_string(va_list val);
int print_HEXADECIMAL(va_list val);
int print_hexadecimal(va_list val);
int print_octal(va_list val);
int print_binary(va_list val);
int display_reverse(va_list args);
int display_rot13(va_list args);
int print_integer(va_list args);
int print_d(va_list args);
int string_len(char *s);
int rev_string(char *s);
int print_37(void);
int print_character(va_list val);
int print_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

