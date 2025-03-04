/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

void manage_mouse_click(csfml_t *csfml, sfMouseButtonEvent event)
{
    if (event.button == sfMouseLeft) {
        sfMusic_play(csfml->song);
        destroy_pi(csfml, event);
    }
    return;
}

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
    return;
}

int csfml_event(csfml_t *csfml)
{
    if (csfml->event.type == sfEvtClosed)
        close_window(csfml->w);
    if (csfml->event.type == sfEvtKeyPressed)
        if (csfml->event.key.code == sfKeyEscape)
            close_window(csfml->w);
    // if (csfml->event.type == sfEvtKeyPressed)
    //     if (csfml->event.key.code == sfKeySpace)
    //         my_pause(csfml);
    if (csfml->event.type == sfEvtMouseButtonPressed)
        manage_mouse_click(csfml, csfml->event.mouseButton);
    return 0;
}

void analyse_events(csfml_t *csfml)
{
    while (sfRenderWindow_pollEvent(csfml->w, &csfml->event))
        csfml_event(csfml);
    return;
}
