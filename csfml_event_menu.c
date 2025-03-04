/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int button_push(sfMouseButtonEvent event)
{
    if (event.x > 750 && event.x < 1224) {
        if (event.y > 988 && event.y < 1030) {
            return 2;
        }
        return 0;
    }
    return 0;
}

int manage_mouse_click_m(sfMouseButtonEvent event)
{
    if (event.button == sfMouseLeft) {
        return button_push(event);
    }
    return 0;
}

int close_window_m(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
    return 0;
}

int csfml_event_m(csfml_t *csfml)
{
    sfView *view;

    if (csfml->event.type == sfEvtClosed)
        return close_window_m(csfml->w);
    if (csfml->event.type == sfEvtKeyPressed)
        if (csfml->event.key.code == sfKeyEscape)
            close_window_m(csfml->w);
    if (csfml->event.type == sfEvtMouseButtonPressed)
        return manage_mouse_click_m(csfml->event.mouseButton);
    if (csfml->event.type == sfEvtResized) {
        view = sfView_createFromRect((sfFloatRect) {0, 0, 1920, 1080});
        sfRenderWindow_setView(csfml->w, view);
    }
    return 0;
}

int analyse_events_menu(csfml_t *csfml)
{
    while (sfRenderWindow_pollEvent(csfml->w, &csfml->event))
        return csfml_event_m(csfml);
    return 0;
}
