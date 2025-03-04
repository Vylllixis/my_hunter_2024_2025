/*
** EPITECH PROJECT, 2024
** day07
** File description:
** my.h
*/

#include "./include.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct pigeon {
    int left;
    int top;
    int width;
    int height;
    int x;
    int y;
} pigeon_t;

typedef struct mgr {
    sfSprite* spr;
    sfTexture* tex;
    int spe;
    int x;
    int y;
    pigeon_t pi;
} mgr_t;

typedef struct gui {
    sfTexture* tex;
    sfSprite* spr;
    int x;
    int y;
} gui_t;

typedef struct csfml {
    sfVideoMode mode;
    sfRenderWindow* w;
    sfEvent event;
    mgr_t pi_1;
    mgr_t pi_2;
    mgr_t pi_3;
    mgr_t pi_4;
    mgr_t pi_5;
    sfTexture* texture_b;
    sfSprite* sprite_b;
    sfTexture* texture_m;
    sfSprite* sprite_m;
    sfSprite* sc_p;
    sfTexture* sc_m;
    sfSprite* r_p;
    sfTexture* r_t;
    sfClock *clock;
    sfTime time;
    float cdown;
    sfSprite* focus;
    sfTexture* focuse_t;
    int score;
    int hightscore;
    int round;
    gui_t r;
    gui_t sc;
    gui_t ammo;
    gui_t inv;
    sfMusic *song;
    sfMusic *mus;
} csfml_t;

#endif /* STRUCT_H_ */
