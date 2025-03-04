/*
** EPITECH PROJECT, 2024
** day06
** File description:
** task07
*/

#include "./include/my.h"

int my_pause(csfml_t *csfml)
{
    while (sfRenderWindow_isOpen(csfml->w)) {
        // background(*csfml);
        if (csfml->event.type == sfEvtKeyPressed)
            if (csfml->event.key.code == sfKeyEscape)
                break;
        gui_hunter(*csfml);
        sfRenderWindow_display(csfml->w);
    }
    return 0;
}
