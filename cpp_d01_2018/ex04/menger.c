/*
** EPITECH PROJECT, 2018
** menger
** File description:
** .c
*/

#include "menger.h"
#include "bitmap.h"
#include "drawing.h"

void  write_bmp_header(int fd, int size)
{
    bmp_header_t  header;
    make_bmp_header (&header , size);
    write(fd, &header , sizeof(header));
}

void  write_bmp_info_header(int fd, int size)
{
    bmp_info_header_t  info;
    make_bmp_info_header (&info , size);
    write(fd, &info , sizeof(info));
}

int color_balance(int depth)
{
    union Data_color data;

    data.i = 0x00FFFFF;

    data.case_[0] = (char)(255 / depth);
    data.case_[1] = (char)(255 / depth);
    data.case_[2] = (char)(255 / depth);
    data.case_[3] = 0;
    return (data.i);
}

void menger(int size, int level, const point_t point, unsigned int **img)
{
    int x = point.x;
    int y = point.y;
    const point_t p = {(unsigned int)(x + size / 3),
        (unsigned int)(y + size / 3)};

    size /= 3;
    draw_square(img, &p, (size_t)size, (uint32_t)color_balance(level));
    if (level > 1) {
        menger(size, --level, (const point_t){x, y}, img);
        menger(size, level, (const point_t){x, y + size}, img);
        menger(size, level, (const point_t){x, y + size * 2}, img);
        menger(size, level, (const point_t){x + size, y}, img);
        menger(size, level, (const point_t){x + size, y + size * 2}, img);
        menger(size, level, (const point_t){x + size * 2, y}, img);
        menger(size, level, (const point_t){x + size * 2, y + size}, img);
        menger(size, level, (const point_t){x + size * 2, y + size * 2}, img);
    }
}