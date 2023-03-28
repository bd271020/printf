#include "main.h"

/**
 * make - takes the inputed string and the conversion specifiers to
 * print a formatted string to the standard output.
 * @format: inputed string containing normal charcters
 * and conversion specifiers.
 * @func_list: an array of conversion specifiers and functions.
 * @arg_list: other arguments passed into the _printf function.
 * Return: returns number of characters printed.
 */

int make(const char *format, convert_spec func_list[], va_list arg_list)
{
	int i, j, k, output_chars;

	output_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].spec != NULL; j++)
			{
				if (format[i + 1] == func_list[j].spec[0])
				{
					k = func_list[j].f(arg_list);
					if (k == -1)
						return (-1);
					output_chars += k;
					break;
				}
			}
			if (func_list[j].spec == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] == '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					output_chars = output_chars + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			output_chars++;
		}
	}
	return (output_chars);
}
