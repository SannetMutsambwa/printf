#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_printf - Print formatted data to stdout
*@format: Format string
* Return: Number of characters printed
* Define a function named _printf with *char and variable argumentds
* The _printf function mimics the brhaviour of a standard printf function.
*/
int _printf(const char *format, ...)
{
int char_print = 0;
va_list args;
va_start(args, format);
if (format == NULL)
{
return (-1);
}
{
if (*format != '%')
{
printf("%s", format);
char_print = char_print + 1;
}
if (*format == 'c')
{
char character = (char)va_arg(args, int);
printf("%c", character);
char_print = char_print + 1;
}
else if (*format == 's')
{
char *string = va_arg(args, char*);
printf("%s", string);
string = string + 1;
char_print = char_print + 1;
}
if (*format == '%')
{
printf("%%");
char_print = char_print + 1;
}
else
{
char_print += _printf("%c", *format);
va_end(args);
}
return (0);
}
}
