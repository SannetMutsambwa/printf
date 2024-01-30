#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
*_printf - Print formatted data to stdout
*@format: Format string
* Return: Number of characters printed
* Define a function named _printf with *char and variable argumentds
* The _printf function mimics the brhaviour of a standard printf function.
*/
int _printf(const char *format, ...)
{
va_list args;
int char_print = 0;
if (format == NULL)
{
return (-1);
}
va_start(args, format);
while (*format)
{
if (*format != '%')
{
printf("%c", *format);
char_print = char_print + 1;
}
else
{
format = format + 1;
switch (*format)
{
case 'c':
{
char character = (char)va_arg(args, int);
printf("%c", character);
char_print = char_print + 1;
break;
}
case 's':
{
char *string = va_arg(args, char *);
if (string == NULL)
{
printf("(null)");
char_print = char_print + 6;
}
else
{
printf("%s", string);
char_print = char_print + strlen(string);
}
break;
}
case '%':
{
printf("%%");
char_print = char_print + 1;
break;
}
default:
printf("%%");
printf("%c", *format);
char_print = char_print + 2;
break;
}
}
format = format + 1;
}
va_end(args);
return (char_print);
}
