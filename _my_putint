#include "main.h"

/**
 * _my_putint - print integer in function in code
 * @u: number to be printed
 * return : return void
 */
void _my_putint(int u)
{
	unsigned int m;

	if (u < 0)
	{
		m = -u;
		_myputchar('-');
	}
	else
		m = u;
	if (m / 10)
		_my_putint(m / 10);
	_myputchar((m % 10) + '0');
}
