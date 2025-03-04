/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int cooldown_pos_5(csfml_t *csfml)
{
    sfVector2f vec = sfSprite_getPosition(csfml->pi_5.spr);
    int cd = (int)(csfml->cdown * 100000) % 1000;

    if (vec.y == 0)
        vec.y = (float)(rand() % 600) + 1.0f;
    if (cd >= 400 && cd <= 600) {
        vec.x = (float)vec.x + (float)csfml->pi_5.spe;
        sfSprite_setPosition(csfml->pi_5.spr, vec);
    }
    if (vec.x > 1920) {
        vec.y = (float)(rand() % 600) + 1.0f;
        vec.x = 0;
        sfSprite_setPosition(csfml->pi_5.spr, vec);
        csfml->pi_5.spe = rand() % 10 + 1;
        csfml->round += 1;
    }
    csfml->pi_5.x = (int)sfSprite_getPosition(csfml->pi_5.spr).x;
    csfml->pi_5.y = (int)sfSprite_getPosition(csfml->pi_5.spr).y;
    return 0;
}

int cooldown_5(csfml_t *csfml, pigeon_t pi)
{
    int cd = fps_3(csfml, 20000);
    sfIntRect temp = (sfIntRect){pi.left, pi.top, pi.width, pi.height};

    if (cd == 1) {
        temp.left = 0;
        temp.height = 110;
    }
    if (cd == 2) {
        temp.left = 110;
        temp.height = 220;
    }
    if (cd == 3) {
        temp.left = 220;
        temp.height = 330;
    }
    sfSprite_setTextureRect(csfml->pi_5.spr, temp);
    sfRenderWindow_drawSprite(csfml->w, csfml->pi_5.spr, NULL);
    return 0;
}

int pigeon_5(csfml_t *csfml)
{
    cooldown_5(csfml, csfml->pi_5.pi);
    cooldown_pos_5(csfml);
    return 0;
}
