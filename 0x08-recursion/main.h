#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
/**
 *void prototypes(void)
 *int prototypes(int)
 *char prototypes(char) 
 */
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _putchar(char c);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int is_prime(int n, int start);
int find_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int calculate_square;
int _recursion_sqrt (int n, int i);
int prime_number(int n, int m);
int sqrt_recursion(int n, int m);

#endif /* MAIN_H */
