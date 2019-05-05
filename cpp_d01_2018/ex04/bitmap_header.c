/*
** EPITECH PROJECT, 2018
** bitmap
** File description:
** .c
*/

#include "bitmap.h"

void make_bmp_header(bmp_header_t *header , size_t  size)
{
    header->magic = 0x4D42;
    header->size = (uint32_t)(
        size * size * 4 + (sizeof(bmp_header_t) + sizeof(bmp_info_header_t)));
    header->_app1 = 0;
    header->_app2 = 0;
    header->offset = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
}

void  make_bmp_info_header(bmp_info_header_t *header , size_t  size)
{
    header->raw_data_size = (uint32_t)(size * size * 4);
    header->width = (int32_t)size;
    header->height = (int32_t)size;
    header->planes = 1;
    header->bpp = 32;
    header->size = 40;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->important_colors = 0;
    header->compression = 0;
}