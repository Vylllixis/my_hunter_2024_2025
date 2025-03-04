/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int cooldown_pos_2(csfml_t *csfml)
{
    sfVector2f vec = sfSprite_getPosition(csfml->pi_2.spr);
    int cd = (int)(csfml->cdown * 100000) % 1000;

    if (vec.y == 0)
        vec.y = (float)(rand() % 600) + 1.0f;
    if (cd >= 400 && cd <= 600) {
        vec.x = (float)vec.x + (float)csfml->pi_2.spe;
        sfSprite_setPosition(csfml->pi_2.spr, vec);
    }
    if (vec.x > 1920) {
        vec.y = (float)(rand() % 600) + 1.0f;
        vec.x = 0;
        sfSprite_setPosition(csfml->pi_2.spr, vec);
        csfml->pi_2.spe = rand() % 10 + 1;
        csfml->round += 1;
    }
    csfml->pi_2.x = (int)sfSprite_getPosition(csfml->pi_2.spr).x;
    csfml->pi_2.y = (int)sfSprite_getPosition(csfml->pi_2.spr).y;
    return 0;
}

int cooldown_2(csfml_t *csfml, pigeon_t pi)
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
    sfSprite_setTextureRect(csfml->pi_2.spr, temp);
    sfRenderWindow_drawSprite(csfml->w, csfml->pi_2.spr, NULL);
    return 0;
}

int pigeon_2(csfml_t *csfml)
{
    cooldown_2(csfml, csfml->pi_2.pi);
    cooldown_pos_2(csfml);
    return 0;
}
