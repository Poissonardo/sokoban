/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** task01
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int n = 0;

    while (src[n] != '\0') {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
    return dest;
}

    //read_str(str_base);
    //read_str(str_dest);
