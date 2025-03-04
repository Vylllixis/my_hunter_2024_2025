/*
** EPITECH PROJECT, 2024
** day04
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
