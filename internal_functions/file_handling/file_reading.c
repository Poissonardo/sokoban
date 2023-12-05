/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** file_reading.c
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include "../memory_managment.h"

char *get_file_content(const char *file_path)
{
    int fd = open(file_path, O_RDONLY);
    char *buffer;
    struct stat file_infos;

    if (fd == (-1))
        exit(84);
    stat(file_path, &file_infos);
    buffer = malloc(sizeof(char) * (file_infos.st_size + 1));
    for (int i = 0; i < (file_infos.st_size + 1); i++) {
        buffer[i] = 0;
    }
    read(fd, buffer, file_infos.st_size);
    return buffer;
}

char **get_map(char const *file_content, int height, int width)
{
    char **map = alloc_2d_arr(height, width);
    int row_index = 0;
    int row = 0;

    for (int i = 0; file_content[i] != '\0'; i++) {
        if (file_content[i] == '\n') {
            row++;
            row_index = 0;
            continue;
        }
        map[row][row_index] = file_content[i];
        row_index++;
    }
    return map;
}
