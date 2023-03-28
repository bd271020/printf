#include "main.h"

/**
 * _printf - takes the input string and prints a formatted string.
 * @format: the inputed string having normal characters and
 * conversion specifiers.
 * Return: returns the numbers of characters printed.
 */

int _printf(const char *format, ...)
{
	int output_chars;
	convert_spec func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	output_chars = make(format, func_list, arg_list);
	va_end(arg_list);
	return (output_chars);
}
