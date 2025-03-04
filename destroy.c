/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int destroy(csfml_t csfml)
{
    sfRenderWindow_destroy(csfml.w);
    sfTexture_destroy(csfml.pi_1.tex);
    sfTexture_destroy(csfml.pi_2.tex);
    sfTexture_destroy(csfml.pi_3.tex);
    sfTexture_destroy(csfml.pi_4.tex);
    sfTexture_destroy(csfml.pi_5.tex);
    sfSprite_destroy(csfml.pi_1.spr);
    sfSprite_destroy(csfml.pi_2.spr);
    sfSprite_destroy(csfml.pi_3.spr);
    sfSprite_destroy(csfml.pi_4.spr);
    sfSprite_destroy(csfml.pi_5.spr);
    sfClock_destroy(csfml.clock);
    return 0;
}
