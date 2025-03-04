/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int spr(sfSprite *spr, sfTexture **text, int *spe, pigeon_t *pi)
{
    *text = sfTexture_createFromFile("./png/pigeon.png", NULL);
    sfSprite_setTexture(spr, *text, sfTrue);
    *spe = 7;
    *pi = (pigeon_t){0, 0, 110, 110, 0, 0};
    return 0;
}

int impl(csfml_t *csfml)
{
    spr(csfml->pi_1.spr, &csfml->pi_1.tex, &csfml->pi_1.spe, &csfml->pi_1.pi);
    spr(csfml->pi_2.spr, &csfml->pi_2.tex, &csfml->pi_2.spe, &csfml->pi_2.pi);
    spr(csfml->pi_3.spr, &csfml->pi_3.tex, &csfml->pi_3.spe, &csfml->pi_3.pi);
    spr(csfml->pi_4.spr, &csfml->pi_4.tex, &csfml->pi_4.spe, &csfml->pi_4.pi);
    spr(csfml->pi_5.spr, &csfml->pi_5.tex, &csfml->pi_5.spe, &csfml->pi_5.pi);
    csfml->hightscore = 0;
    return 0;
}

int implementation(csfml_t *csfml)
{
    csfml->mode = (sfVideoMode){1920, 1080, 32};
    csfml->pi_1.spr = sfSprite_create();
    csfml->pi_2.spr = sfSprite_create();
    csfml->pi_3.spr = sfSprite_create();
    csfml->pi_4.spr = sfSprite_create();
    csfml->pi_5.spr = sfSprite_create();
    impl(csfml);
    csfml->sprite_b = sfSprite_create();
    csfml->focus = sfSprite_create();
    csfml->texture_b = sfTexture_createFromFile("./png/all.png", NULL);
    csfml->focuse_t = sfTexture_createFromFile("./png/aim.png", NULL);
    csfml->clock = sfClock_create();
    sfSprite_setTexture(csfml->sprite_b, csfml->texture_b, sfTrue);
    sfSprite_setTexture(csfml->focus, csfml->focuse_t, sfTrue);
    csfml->w = sfRenderWindow_create(csfml->mode, "csfml", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(csfml->w, 600);
    csfml->round = 0;
    csfml->score = 0;
    return 0;
}

int implementation_menu(csfml_t *csfml)
{
    csfml->sprite_m = sfSprite_create();
    csfml->texture_m = sfTexture_createFromFile("./png/start.jpg", NULL);
    sfSprite_setTexture(csfml->sprite_m, csfml->texture_m, sfTrue);
    return 0;
}

int implementation_gui(csfml_t *csfml)
{
    csfml->r.spr = sfSprite_create();
    csfml->sc.spr = sfSprite_create();
    csfml->ammo.spr = sfSprite_create();
    csfml->inv.spr = sfSprite_create();
    csfml->sc_p = sfSprite_create();
    csfml->r_p = sfSprite_create();
    csfml->r.tex = sfTexture_createFromFile("./png/all.png", NULL);
    csfml->sc.tex = sfTexture_createFromFile("./png/all.png", NULL);
    csfml->ammo.tex = sfTexture_createFromFile("./png/all.png", NULL);
    csfml->inv.tex = sfTexture_createFromFile("./png/all.png", NULL);
    csfml->sc_m = sfTexture_createFromFile("./png/all.png", NULL);
    csfml->r_t = sfTexture_createFromFile("./png/all.png", NULL);
    sfSprite_setTexture(csfml->r.spr, csfml->r.tex, sfTrue);
    sfSprite_setTexture(csfml->sc.spr, csfml->sc.tex, sfTrue);
    sfSprite_setTexture(csfml->ammo.spr, csfml->ammo.tex, sfTrue);
    sfSprite_setTexture(csfml->inv.spr, csfml->inv.tex, sfTrue);
    sfSprite_setTexture(csfml->sc_p, csfml->sc_m, sfTrue);
    sfSprite_setTexture(csfml->r_p, csfml->r_t, sfTrue);
    return 0;
}
