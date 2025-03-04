/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int csfml_prins(csfml_t *csfml)
{
    while (sfRenderWindow_isOpen(csfml->w)) {
        background(*csfml);
        csfml->time = sfClock_getElapsedTime(csfml->clock);
        csfml->cdown = sfTime_asSeconds(csfml->time);
        pigeon(csfml);
        analyse_events(csfml);
        gui_hunter(*csfml);
        crossair(*csfml);
        sfRenderWindow_display(csfml->w);
        if (csfml->round > 9) {
            sfRenderWindow_setMouseCursorVisible(csfml->w, 1);
            csfml->round = 0;
            csfml_menu(csfml);
        }
    }
    return 0;
}

int csfml_menu(csfml_t *csfml)
{
    if (csfml->hightscore < csfml->score)
        csfml->hightscore = csfml->score;
    while (sfRenderWindow_isOpen(csfml->w)) {
        background_menu(csfml);
        if (analyse_events_menu(csfml) == 2)
            break;
        score(*csfml);
        display_hightscore(*csfml);
        sfRenderWindow_display(csfml->w);
    }
    csfml->score = 0;
    rand_pigeon(*csfml);
    return 0;
}

int csfml(void)
{
    csfml_t csfml;

    implementation(&csfml);
    implementation_menu(&csfml);
    implementation_gui(&csfml);
    implementation_song(&csfml);
    csfml_menu(&csfml);
    sfRenderWindow_setMouseCursorVisible(csfml.w, 0);
    csfml_prins(&csfml);
    destroy(csfml);
    return 0;
}

int help(void)
{
    my_putstr("Usage: ./my_hunter [OBTION]\n");
    my_putstr("run my Duck Hunt, this is a game where you should hit a\n");
    my_putstr("Duck for up your score and if you have a tenth round, you won");
    my_putstr("\n\nOption :\n\t-h,\tdisplay the help for run game\n");
    my_putstr("\t--help,\tdisplay the help for run game\n\n");
    my_putstr("Exit status:\n\t0 if OK,\n\t84 if error\n");
    my_putstr("\nObjectif:\n\tfor win you should hit bird.\n\tIf ten bird ");
    my_putstr("rescuse, you loose\n\tYour goal is greater score possible\n");
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 2) {
        if (my_strncmp(argv[1], "-h", 2) == 1) {
            help();
            return 0;
        }
        if (my_strncmp(argv[1], "--help", 4) == 1) {
            help();
            return 0;
        }
    }
    csfml();
    return 0;
}
