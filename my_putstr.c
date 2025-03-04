/*
** EPITECH PROJECT, 2024
** day13
** File description:
** csfml
*/

#include "./include/my.h"

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}
