/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int destroy_pi_5(csfml_t *csfml, sfMouseButtonEvent event)
{
    sfVector2f vec;

    if (csfml->pi_5.x < event.x && csfml->pi_5.x > event.x - 110) {
        if (csfml->pi_5.y < event.y && csfml->pi_5.y > event.y - 110) {
            vec = sfSprite_getPosition(csfml->pi_5.spr);
            vec.x = 0;
            vec.y = (float) (rand() % 600) + 1.0f;
            sfSprite_setPosition(csfml->pi_5.spr, vec);
            csfml->score += (csfml->pi_5.y * csfml->pi_5.spe);
            csfml->pi_5.spe = (rand() % 10 + 1);
            csfml->pi_5.x = 0;
        }
    }
    return 0;
}

int destroy_pi_4(csfml_t *csfml, sfMouseButtonEvent event)
{
    sfVector2f vec;

    if (csfml->pi_4.x < event.x && csfml->pi_4.x > event.x - 110) {
        if (csfml->pi_4.y < event.y && csfml->pi_4.y > event.y - 110) {
            vec = sfSprite_getPosition(csfml->pi_4.spr);
            vec.x = 0;
            vec.y = (float)(rand() % 600) + 1.0f;
            sfSprite_setPosition(csfml->pi_4.spr, vec);
            csfml->score += (csfml->pi_4.y * csfml->pi_4.spe);
            csfml->pi_4.spe = (rand() % 10 + 1);
            csfml->pi_4.x = 0;
        }
    }
    destroy_pi_5(csfml, event);
    return 0;
}

int destroy_pi_3(csfml_t *csfml, sfMouseButtonEvent event)
{
    sfVector2f vec;

    if (csfml->pi_3.x < event.x && csfml->pi_3.x > event.x - 110) {
        if (csfml->pi_3.y < event.y && csfml->pi_3.y > event.y - 110) {
            vec = sfSprite_getPosition(csfml->pi_3.spr);
            vec.x = 0;
            vec.y = (float)(rand() % 600) + 1.0f;
            sfSprite_setPosition(csfml->pi_3.spr, vec);
            csfml->score += (csfml->pi_3.y * csfml->pi_3.spe);
            csfml->pi_3.spe = (rand() % 10 + 1);
            csfml->pi_3.x = 0;
        }
    }
    destroy_pi_4(csfml, event);
    return 0;
}

int destroy_pi_2(csfml_t *csfml, sfMouseButtonEvent event)
{
    sfVector2f vec;

    if (csfml->pi_2.x < event.x && csfml->pi_2.x > event.x - 110) {
        if (csfml->pi_2.y < event.y && csfml->pi_2.y > event.y - 110) {
            vec = sfSprite_getPosition(csfml->pi_2.spr);
            vec.x = 0;
            vec.y = (float)(rand() % 600) + 1.0f;
            sfSprite_setPosition(csfml->pi_2.spr, vec);
            csfml->score += (csfml->pi_2.y * csfml->pi_2.spe);
            csfml->pi_2.spe = (rand() % 10 + 1);
            csfml->pi_2.x = 0;
        }
    }
    destroy_pi_3(csfml, event);
    return 0;
}

int destroy_pi(csfml_t *csfml, sfMouseButtonEvent event)
{
    sfVector2f vec;

    if (csfml->pi_1.x < event.x && csfml->pi_1.x > event.x - 110) {
        if (csfml->pi_1.y < event.y && csfml->pi_1.y > event.y - 110) {
            vec = sfSprite_getPosition(csfml->pi_1.spr);
            vec.x = 0;
            vec.y = (float)(rand() % 600) + 1.0f;
            sfSprite_setPosition(csfml->pi_1.spr, vec);
            csfml->score += (csfml->pi_1.y * csfml->pi_1.spe);
            csfml->pi_1.spe = (rand() % 10 + 1);
            csfml->pi_1.x = 0;
        }
    }
    destroy_pi_2(csfml, event);
    return 0;
}
