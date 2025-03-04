/*
** EPITECH PROJECT, 2024
** day07
** File description:
** my.h
*/

#include "./struct.h"

#ifndef MY_H_
    #define MY_H_

void analyse_events(csfml_t *csfml);
int fps_3(csfml_t *csfml, int fps);
int destroy(csfml_t csfml);
int implementation(csfml_t *csfml);
int pigeon_1(csfml_t *csfml);
int pigeon_2(csfml_t *csfml);
int pigeon_3(csfml_t *csfml);
int pigeon_4(csfml_t *csfml);
int pigeon_5(csfml_t *csfml);
int destroy_pi(csfml_t *csfml, sfMouseButtonEvent event);
int crossair(csfml_t csfml);
int background(csfml_t csfml);
int pigeon(csfml_t *csfml);
int implementation_menu(csfml_t *csfml);
int background_menu(csfml_t *csfml);
int analyse_events_menu(csfml_t *csfml);
int gui_hunter(csfml_t csfml);
int implementation_gui(csfml_t *csfml);
int my_putchar(char c);
int my_putstr(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *str);
int ammo(csfml_t csfml);
int inv(csfml_t csfml);
int score(csfml_t csfml);
int round_m(csfml_t csfml);
int display_score(csfml_t csfml);
int csfml_menu(csfml_t *csfml);
int rand_pigeon(csfml_t csfml);
int display_hightscore(csfml_t csfml);
int implementation_song(csfml_t *csfml);
int my_pause(csfml_t *csfml);

#endif /* MY_H_ */
