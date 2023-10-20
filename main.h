#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _myputchar(char f);
int _putstring(char *str);
void _my_putint(int u);
int _num_length(int num);
int _print_binary(unsigned int y);
int _check_arg(char ca, va_list li);
#endif
