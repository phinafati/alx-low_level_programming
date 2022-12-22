<<<<<<< HEAD
#ifndef FILE_MAIN
#define FILE_MAIN

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
=======
#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Alx School students.
 *
 * Return: Always 0.
 */

int main (void)
{
char s1[98] = "Hello ";
char s2[] = "world!\n";
char ptr;

printf("%s\n", s1);
printf("%s", s2);
ptr = strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);
return (0);
}
>>>>>>> 014ac3ee30b5152737a8c71e5c87d5c2498d100b
