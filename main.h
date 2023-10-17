#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_string(va_list val);
int print_37(void);
int _strlen(char *str);
int _strlenc(const char *str);
#endif
