/*
** EPITECH PROJECT, 2018
** main
** File description:
** .c
*/

#include  <stdlib.h>
#include  <unistd.h>
#include  <fcntl.h>
#include  <string.h>
#include "drawing.h"
#include "menger.h"
#include "bitmap.h"

void  initialize_image(size_t  size , unsigned  int *buffer ,
    unsigned  int **img)
{
    memset(buffer , 0, size * size * sizeof(* buffer));
    for (size_t i = 0; i < size; ++i)
        img[i] = buffer + i * size;

}

void  create_image(size_t  size , unsigned  int *buffer , unsigned  int
**img, int level)
{
    const point_t point = {0, 0};

    initialize_image(size , buffer , img);
    menger(size, level, point, img);
}

void  create_bitmap_from_buffer(char *filename, size_t  size , unsigned  int
*buffer)
{
    int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY , 0644);

    write_bmp_header(fd, size);
    write_bmp_info_header(fd, size);
    write(fd, buffer , size * size * sizeof (*buffer));
    close(fd);
}

int  main(int ac, char **av)
{
    char *filename = NULL;
    int level = 0;
    size_t size = 0;
    unsigned int *buffer = NULL;
    unsigned int **img = NULL;

    if (error_gestion(ac, av) == 84)
        return (84);
    filename = strdup(av[1]);
    level = atoi(av[3]);
    size = (size_t)my_getnbr(av[2]);
    buffer = malloc(size * size * sizeof (* buffer));
    img = malloc(size * sizeof (*img));
    create_image(size , buffer , img, level);
    create_bitmap_from_buffer(filename, size , buffer);
    return (0);
}
