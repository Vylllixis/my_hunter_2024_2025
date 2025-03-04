/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int rand_pigeon(csfml_t csfml)
{
    float r = (float)(rand() % 600) + 1.0f;

    sfSprite_setPosition(csfml.pi_1.spr, (sfVector2f){0, r});
    r = (float)(rand() % 600) + 1.0f;
    sfSprite_setPosition(csfml.pi_2.spr, (sfVector2f){0, r});
    r = (float)(rand() % 600) + 1.0f;
    sfSprite_setPosition(csfml.pi_3.spr, (sfVector2f){0, r});
    r = (float)(rand() % 600) + 1.0f;
    sfSprite_setPosition(csfml.pi_4.spr, (sfVector2f){0, r});
    r = (float)(rand() % 600) + 1.0f;
    sfSprite_setPosition(csfml.pi_5.spr, (sfVector2f){0, r});
    return 0;
}
