#include "main.h"

/**
 * _num_length - return the number len
 * @num: number to be printed
 * Return: len.
 */
int _num_length(int num)
{
	int len = 1;

	if (num < 0)
		len++;
	while (num /= 10)
		len++;
	return (len);
}

