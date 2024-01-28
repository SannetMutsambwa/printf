#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

/**
* struct print_fn - conversion specifiers with corresponding function
* @specifier: Conversion specifier ('c', 's', 'd', 'i', etc.)
* @fn: Pointer to corresponding function
*custom printf function
*/
typedef struct print_fn
{
char specifier;
int (*fn)(va_list, int *);
} print_fn;

int _printf(const char *format, ...);

/* custom conversion specifier functions */
int print_c(char c, int *char_print);
int print_s(char *str, int *char_print);
int print_d(int num, int *char_print);
int print_i(int num, int *char_print);
int print_b(unsigned int num, int *char_print);
int print_u(unsigned int num, int *char_print);
int print_o(unsigned int num, int *char_print);
int print_x(unsigned int num, int *char_print);
int print_X(unsigned int num, int *char_print);
int print_S(char *str, int *char_print);
int print_p(void *ptr, int *char_print);
int print_plus(int num, int *char_print);
int print_space(int num, int *char_print);
int print_hash(int num, int *char_print);
int print_l(long num, int *char_print);
int print_h(short num, int *char_print);
int print_width(int num, int *char_print);
int print_precision(int num, int *char_print);
int print_zero(int num, int *char_print);
int print_minus(int num, int *char_print);
int print_r(char *str, int *char_print);
int print_R(char *str, int *char_print);

#endif /*MAIN_H*/
