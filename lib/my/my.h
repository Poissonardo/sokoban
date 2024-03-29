/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** my.h
*/

#pragma once

void my_putchar(char c);

__attribute__((unused)) void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

__attribute__((unused)) int my_compute_factorial_it(int nb);

int my_compute_factorial_rec(int nb);

__attribute__((unused)) int my_compute_power_it(int nb, int power);

__attribute__((unused)) char *my_evil_str(char *str);

int my_compute_power_rec(int nb, int power);

__attribute__((unused)) int my_compute_square_root(int nb);

int my_is_prime(int nb);

__attribute__((unused)) int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strlowcase(char *str);

void for_positive(int a, int b, long c);

void for_negative(long a, int b, long c);
__attribute__((unused)) int my_put_nbr_base(int nb, char *base_str);

int is_alphanum(char a);

void for_positive_err(int nb, int arg_length, long result_holder);

void for_negative_err(long nb, int arg_length, long result_holder);
