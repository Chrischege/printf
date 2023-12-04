#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int display_char(va_list);
int display_string(va_list);
int display_percent(va_list);
int display_integer(va_list);
int display_num(va_list);
int display_binary(va_list);
int display_reversed(va_list arg);
int encode_rot13(va_list);
int unsigned_int(va_list);
int display_octal(va_list list);
int display_hex(va_list list);
int display_heX(va_list list);

/*Helper functions*/
unsigned int calculate_base_length(unsigned int, int);
char *reverse_string(char *);
void print_base(char *str);
char *copy_memory(char *dest, char *src, unsigned int n);
int display_unsigned_number(unsigned int);


#endif
