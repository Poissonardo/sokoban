/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_islower.c
*/

static int is_letter(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        return 1;
    }
    return 0;
}

__attribute__((unused)) int my_str_islower(char const *str)
{
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_letter(str[i]) == 1 && str[i] <= 'z' && str[i] >= 'a') {
            continue;
        }
        if (is_letter(str[i]) == 0)
            continue;
        return 0;
    }
    return 1;
}
