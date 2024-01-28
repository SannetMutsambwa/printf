#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_printf - Print formatted data to stdout
*@format: Format string
* Return: Number of characters printed
* Define a function named _printf with *char and variable argumentds
* The _printf function mimics the brhaviour of a standard printf function.
* Takes a string and variable as input
* return: '%', 's' or 'c' if successful
*/
int _printf(const char *format, ...)
{
int counter = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
printf("%%");
counter = counter + 1;
}
else if (*format == 'c')
{
int character = va_arg(args, int);
printf("%c", character);
counter = counter + 1;
}
else if (*format == 's')
{
char *string = va_arg(args, char*);
while (*string)
{
printf("%c", *string);
string = string + 1;
counter = counter + 1;
}
}
else
{
counter += printf("%c", *format);
}
format = format + 1;
}
va_end(args);
return (0);
}
