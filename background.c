/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int background(csfml_t csfml)
{
    float a = ((float)1920 / (float)256);
    float b = ((float)1080 / (float)240);
    sfVector2f scale = {a, b};

    sfSprite_setTextureRect(csfml.sprite_b, (sfIntRect){0, 0, 256, 240});
    sfSprite_setScale(csfml.sprite_b, scale);
    sfRenderWindow_drawSprite(csfml.w, csfml.sprite_b, NULL);
    return 0;
}

int background_menu(csfml_t *csfml)
{
    float a = ((float)1920 / (float)800);
    float b = ((float)1080 / (float)600);
    sfVector2f scale = {a, b};

    sfSprite_setTextureRect(csfml->sprite_m, (sfIntRect){0, 0, 800, 600});
    sfSprite_setScale(csfml->sprite_m, scale);
    sfRenderWindow_drawSprite(csfml->w, csfml->sprite_m, NULL);
    return 0;
}
