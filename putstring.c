#include "main.h"

/**
 * _putstring - function that print the string.
 * @ptrn: parameter is string
 * Return: length of the string.
*/
int _putstring(char *ptrn)
{
return (write(1, ptrn, strlen(ptrn)));
}

