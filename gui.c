/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int imple_ro_2(int sc, csfml_t csfml)
{
    if (sc == 5) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){429, 242, 7, 7});
    }
    if (sc == 6) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){390, 250, 7, 7});
    }
    if (sc == 7) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){398, 250, 7, 7});
    }
    if (sc == 8) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){406, 250, 7, 7});
    }
    if (sc == 9) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){414, 250, 7, 7});
    }
    return 0;
}

int imple_ro(int sc, csfml_t csfml)
{
    if (sc == 0) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){390, 242, 7, 7});
    }
    if (sc == 1) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){398, 242, 7, 7});
    }
    if (sc == 2) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){406, 242, 7, 7});
    }
    if (sc == 3) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){414, 242, 7, 7});
    }
    if (sc == 4) {
        sfSprite_setTextureRect(csfml.r_p, (sfIntRect){421, 242, 7, 7});
    }
    imple_ro_2(sc, csfml);
    return 0;
}

int print_ro(int x, int y, int sc, csfml_t csfml)
{
    float a = ((float)1920 / (float)256);
    float b = ((float)1080 / (float)240);
    sfVector2f scale = {a, b};

    imple_ro(sc, csfml);
    sfSprite_setScale(csfml.r_p, scale);
    sfSprite_setPosition(csfml.r_p, (sfVector2f){(float)x * a, (float)y * b});
    sfRenderWindow_drawSprite(csfml.w, csfml.r_p, NULL);
    return 0;
}

int display_round(csfml_t csfml)
{
    int a = 40;
    int b = 192;
    int round = csfml.round;

    for (int i = 0; round > 9; i++) {
        print_ro(a, b, (round % 10), csfml);
        round = (round - (round % 10)) / 10;
        a -= 8;
    }
    print_ro(a, b, (round % 10), csfml);
    return 0;
}

int gui_hunter(csfml_t csfml)
{
    ammo(csfml);
    inv(csfml);
    score(csfml);
    round_m(csfml);
    display_score(csfml);
    display_round(csfml);
    return 0;
}
