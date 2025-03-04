/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int imple_sc_2(int sc, csfml_t csfml)
{
    if (sc == 5) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){429, 258, 7, 7});
    }
    if (sc == 6) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){390, 266, 7, 7});
    }
    if (sc == 7) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){398, 266, 7, 7});
    }
    if (sc == 8) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){406, 266, 7, 7});
    }
    if (sc == 9) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){414, 266, 7, 7});
    }
    return 0;
}

int imple_sc(int sc, csfml_t csfml)
{
    if (sc == 0) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){390, 258, 7, 7});
    }
    if (sc == 1) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){398, 258, 7, 7});
    }
    if (sc == 2) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){406, 258, 7, 7});
    }
    if (sc == 3) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){414, 258, 7, 7});
    }
    if (sc == 4) {
        sfSprite_setTextureRect(csfml.sc_p, (sfIntRect){421, 258, 7, 7});
    }
    imple_sc_2(sc, csfml);
    return 0;
}

int print_sc(int x, int y, int sc, csfml_t csfml)
{
    float a = ((float)1920 / (float)256);
    float b = ((float)1080 / (float)240);
    sfVector2f scale = {a, b};

    imple_sc(sc, csfml);
    sfSprite_setScale(csfml.sc_p, scale);
    sfSprite_setPosition(csfml.sc_p, (sfVector2f){(float)x * a, (float)y * b});
    sfRenderWindow_drawSprite(csfml.w, csfml.sc_p, NULL);
    return 0;
}

int display_score(csfml_t csfml)
{
    int a = 232;
    int b = 208;
    int score = csfml.score;

    for (int i = 0; score > 9; i++) {
        print_sc(a, b, (score % 10), csfml);
        score = (score - (score % 10)) / 10;
        a -= 8;
    }
    print_sc(a, b, (score % 10), csfml);
    return 0;
}
