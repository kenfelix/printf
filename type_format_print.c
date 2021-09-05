#include "main.h"

/**
 * print_string - prints a string with s specifier
 * @arg: argument
 * Return: number of character printed
 */
int print_string(va_list arg)
{
    int i;
    char *string = va_arg(arg, char*);
    if(string == NULL){
        string = "(null)";
    }
    else if (*string == '\0'){
        return (-1);
    }
    for (i=0; string[i]; i++){
        _putchar(string[i]);
    }
    return (i);
}

/**
 * print_integer - prints an integer.
 * @arg: argument
 * Return: 0
 */

int print_integer(va_list arg)
{
    unsigned int i;
    unsigned int representation;
    unsigned int denominator = 1;
    unsigned int printed_char = 0;

    int n = va_arg(arg, int);
    if(n<0){
        _putchar('-');
        printed_char ++;
        n = n * -1;
    }
    for (i=0; n / denominator > 9; i++ , denominator *= 10);
    for(; denominator >= 1; n %= denominator, denominator /= 10, printed_char)
    {
        representation = n/denominator;
        _putchar('0'+representation);
    }
    return (printed_char);
}


/**
 * print_char - writes the character c to stdout
 * @arg: argument
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_char(va_list arg)
{
    return (_putchar(va_arg(arg,int )));
}
