#include "main.h"

/**
 * _printf - function that produces output according to a format specifiers.
 * @format: the format string specifier
 * Return: the number of characters
*/
int _printf(const char *format, ...)
{
insigned int x, count = 0;
va_list ptr;
if (format == NULL)
return (-1);
va_start(ptr, format);
for (x = 0; format[i]; x++)
{
if (format != '%')
{
count += _myputchar(format[x]);
continue;
}
if (x++ == strlen(format) - 1)
return (-1);
count += _check_arg(format[x], ptr);
}
va_end(ptr);
return (count);
}
