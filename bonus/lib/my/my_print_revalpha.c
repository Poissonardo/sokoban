/*
** EPITECH PROJECT, 2023
** day03
** File description:
** task01
*/
#include <unistd.h>

__attribute__((unused)) void my_print_revalpha(void)
{
    for (unsigned int i = 122; i >= 97; i--) {
        write(1, &i, 1);
    }
}
