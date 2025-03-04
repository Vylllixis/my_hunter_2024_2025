/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int fps_3(csfml_t *csfml, int fps)
{
    int cd = (int)(csfml->cdown * 100000);
    int fps1 = fps / 3;
    int fps2 = (int)(fps / 1.5);
    int fps3 = fps;
    int res = cd % fps;

    if (res > 0 && res < fps1)
        return 1;
    if (res > fps1 && res < fps2)
        return 2;
    if (res > fps2 && res < fps3)
        return 3;
    return 0;
}
