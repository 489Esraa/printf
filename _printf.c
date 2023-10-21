#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: the format string with specifier
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int x, count = 0;
	va_list ptrn;

	if (format == NULL)
		return (-1);
	va_start(ptrn, format);

	for (x = 0; format[x]; x++)
	{
		if (format[x] != '%')
		{
			count += _myputchar(format[x]);
			continue;
		}
		if (x++ == strlen(format) - 1)
			return (-1);
		count += _check_arg(format[x], ptrn);
	}

	va_end(ptrn);
	return (count);
}

