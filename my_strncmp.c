/*
** EPITECH PROJECT, 2024
** day06
** File description:
** task07
*/

#include "./include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = my_strlen(s1) + 1;
    int b = my_strlen(s2) + 1;

    if (a != b)
        return 0;
    for (int i = 0; s1[i] != '\0' && i <= n; i++)
        if (s1[i] != s2[i])
            return 0;
    return 1;
}
