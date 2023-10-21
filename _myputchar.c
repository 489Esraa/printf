#include "main.h"

/**
 * _myputchar - function prints a character use it in code.
 * @f: parameter is a character
 * Return: integer number
*/
int _myputchar(char f)
{
return (write(1, &f, 1));
}

