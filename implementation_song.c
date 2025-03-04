/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int implementation_song(csfml_t *csfml)
{
    csfml->song = sfMusic_createFromFile("./png/tir.mp3");
    csfml->mus = sfMusic_createFromFile("./png/mus.mp3");
    sfMusic_setVolume(csfml->mus, (float)10.0);
    sfMusic_setVolume(csfml->song, (float)10.0);
    sfMusic_setLoop(csfml->mus, 1);
    sfMusic_play(csfml->mus);
    return 0;
}
