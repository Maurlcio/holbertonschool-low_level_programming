#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <time.h>

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

void print_times_table(int n);

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_number(int n);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void puts2(char *str);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

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

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grind(int width, int height);

void free_grid(int **grid, int height);

char **strtow(char *str);

char *argstostr(int ac, char **av);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmembm, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int _printf(const char *format, ...);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

/**
 *struct listint_s - singly linked list
 *@n: integer
 *@next: points to the next node
 *Description: singly linked list node structure
 */
typedef struct listint_s
{
	    int n;
	    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

size_t listint_len(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);

listint_t *add_nodeint_end(listint_t **head, const int n);

void free_listint(listint_t *head);

void free_listint2(listint_t **head);

int pop_listint(listint_t **head);

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

int sum_listint(listint_t *head);

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

int delete_nodeint_at_index(listint_t **head, unsigned int index);

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
