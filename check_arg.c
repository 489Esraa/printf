#include "main.h"

/**
 * _check_arg - print argument in function.
 * @ca: the string format
 * @li: the variable arguments
 * Return: length.
 */
int _check_arg(char ca, va_list li)
{
	int num, len = 0;
	char *str;

	switch (ca)
	{
	case 'c':
		len += _myputchar(va_arg(li, int));
		break;
	case 's':
		str = va_arg(li, char *);
		len += _putstring(str ? str : "(null)");
		break;
	case 'd':
	case 'i':
		num = va_arg(li, int);
		_my_putint(num);
		len += _num_length(num);
		break;
	case 'b':
		len += _print_binary(va_arg(li, unsigned int));
		break;
	case '%':
		len += _myputchar('%');
		break;
	default:
		len += _myputchar('%');
		len += _myputchar(ca);
		break;
	}
	return (len);
}

