#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char* format, ...);
int _putchar(char c);

int print_char(va_list arg);
int print_int(va_list arg);
int print_str(va_list arg);



typedef struct
{
    char *identifier;
    int (*printer)(va_list);
} format_print;

#endif MAIN_H
