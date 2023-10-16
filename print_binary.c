#include "main.h"

/**
 * _print_binary - print a binary number of function.
 * @n: parameter is unsigned integer
 * Return: give length.
*/
int _print_binary(unsigned int n)
{
unsigned int e, a;
unsigned int arr[32];
int cn = 0;
e = 2147483648;
arr[0] = n / e;
for (a = 1; a < 32; a++)
{
e /= 2;
arr[a] = (n / e) % 2;
}
for (a = 0; a < 31; a++)
if (arr[a])
break;
for (; a < 32; a++)
{
char z = '0' + arr[a];
write(1, &z, 1);
cn++;
}
return (cn);
}
}