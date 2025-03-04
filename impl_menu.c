/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int ammo(csfml_t csfml)
{
    float a = ((float)1920 / (float)256);
    float b = ((float)1080 / (float)240);
    sfVector2f scale = {a, b};

    sfSprite_setTextureRect(csfml.ammo.spr, (sfIntRect){56, 244, 24, 16});
    sfSprite_setScale(csfml.ammo.spr, scale);
    sfSprite_setPosition(csfml.ammo.spr, (sfVector2f){23.0f * a, 207.0f * b});
    sfRenderWindow_drawSprite(csfml.w, csfml.ammo.spr, NULL);
    return 0;
}

int inv(csfml_t csfml)
{
    float a = ((float)1920 / (float)256);
    float b = ((float)1080 / (float)240);
    sfVector2f scale = {a, b};

    sfSprite_setTextureRect(csfml.inv.spr, (sfIntRect){84, 243, 113, 18});
    sfSprite_setScale(csfml.inv.spr, scale);
    sfSprite_setPosition(csfml.inv.spr, (sfVector2f){63.0f * a, 207.0f * b});
    sfRenderWindow_drawSprite(csfml.w, csfml.inv.spr, NULL);
    return 0;
}

int score(csfml_t csfml)
{
    float a = ((float)1920 / (float)256);
    float b = ((float)1080 / (float)240);
    sfVector2f scale = {a, b};

    sfSprite_setTextureRect(csfml.sc.spr, (sfIntRect){207, 244, 48, 18});
    sfSprite_setScale(csfml.sc.spr, scale);
    sfSprite_setPosition(csfml.sc.spr, (sfVector2f){191.0f * a, 207.0f * b});
    sfRenderWindow_drawSprite(csfml.w, csfml.sc.spr, NULL);
    return 0;
}

int round_m(csfml_t csfml)
{
    float a = ((float)1920 / (float)256);
    float b = ((float)1080 / (float)240);
    sfVector2f scale = {a, b};

    sfSprite_setTextureRect(csfml.r.spr, (sfIntRect){12, 247, 23, 8});
    sfSprite_setScale(csfml.r.spr, scale);
    sfSprite_setPosition(csfml.r.spr, (sfVector2f){24.0f * a, 192.0f * b});
    sfRenderWindow_drawSprite(csfml.w, csfml.r.spr, NULL);
    return 0;
}
