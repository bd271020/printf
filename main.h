#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct convert - defines a strucyure for symbols and functions
 *
 *  @sym: The operator
 *  @f: The function associated
 */
typedef struct convert
{
	char *spec;
	int (*f) (va_list);
}

int _printf(const char *format, ...);
int make(const char *format, convert_spec func_list[], va_list arg_list);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);


#endif