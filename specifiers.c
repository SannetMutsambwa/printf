#include "main.h"
/**
* print_integer - Print an integer
* @num: Integer to be printed
* @char_print: Pointer to the total character count
* Return: Number of characters printed
*/
int print_integer(int num, int *char_print)
{
char buffer[BUFF_SIZE];
int digits = 0;
/* Handle the case where the number is 0 separately*/
if (num == 0)
{
fputc('0', stdout);
(*char_print)++;
return (1);
}
/* Handle negative numbers*/
if (num < 0)
{
fputc('-', stdout);
(*char_print)++;
num = -num;
}
/* Convert the number to a string in reverse order*/
while (num != 0)
{
buffer[digits++] = num % 10 + '0';
num /= 10;
}
/*Print the characters in reverse order*/
for (int i = digits - 1; i >= 0; i--)
{
fputc(buffer[i], stdout);
(*char_print)++;
}
return (digits);
}
/**
* _printf - Custom printf function
* @format: Format string containing format specifiers
* Description: This function prints formatted output to stdout.
* Return: Number of characters printed (excluding null byte)
*/
int _printf(const char *format, ...)
{
int char_print = 0;
va_list list_of_args;
if (format == NULL)
return (-1);
va_start(list_of_args, format);
while (*format)
{
if (*format != '%')
{
char temp[2];
temp[0] = *format;
temp[1] = '\0';
fputs(temp, stdout);
char_print++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == 'd' || *format == 'i')
{
int num = va_arg(list_of_args, int);
print_integer(num, &char_print);
}
}
format++;
}
va_end(list_of_args);
return (char_print);
}
