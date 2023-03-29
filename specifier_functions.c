#include "main.h"

/**
 * print_char - Prints character
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints integer
 * @args: list of argumments
 * Return: returns the integer inputted
 */
int print_integer(va_list args)
{
	int n, d, i;
	unsigned int x;

	n = va_arg(args, int);
	d = 1;
	i = 0;

	if (n < 0)
	{
		i = _putchar('-');
		x = n * (-1);
	}
	else
		x = n;
	while ((x / d) > 10)
		d = d * 10;
	while (d != 0)
	{
		i = i + _putchar('0' + (x / d));
		x = x % d;
		d = d / 10;
	}
	return (i);
}
