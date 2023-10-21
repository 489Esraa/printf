#include "main.h"

/**
 * _printf - function that produces output according to a format specifiers.
 * @format: the format string specifier
 * Return: the number of characters
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list ptr;
if (format == NULL)
return (-1);
va_start(ptr, format);
while (*format)
{
if (*format != '%')
count += _myputchar(format[x]);
continue;
}
else
{
format++;
if (*format == ' ' || *format == '\0')
return (-1); 
if (*format == '%')
{
_myputchar('%');
count++;
}
}
va_end(ptr);
return (count);
}
