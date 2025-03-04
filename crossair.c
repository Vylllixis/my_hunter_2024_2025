/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int crossair(csfml_t csfml)
{
    float sc = (float)0.15;
    sfVector2f scale = {sc, sc};
    sfVector2f pos;
    float mil = (float)(((float)512.0 * sc) / (float)2.0);

    pos.x = (float)sfMouse_getPositionRenderWindow(csfml.w).x - mil;
    pos.y = (float)sfMouse_getPositionRenderWindow(csfml.w).y - mil;
    sfSprite_setPosition(csfml.focus, pos);
    sfSprite_setScale(csfml.focus, scale);
    sfRenderWindow_drawSprite(csfml.w, csfml.focus, NULL);
    return 0;
}
