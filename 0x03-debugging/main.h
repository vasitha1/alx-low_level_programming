#include <unistd.h>/*declaring library for function write*/


/*creating a header guard before defining it*/
#ifndef MAIN_H
#define MAIN_H

/*define functions*/
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
int largest_number(int a, int b, int c);
void print_remaining_days(int, int, int);
int convert_day(int, int);

#endif
