/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "../include/palindrome.h"
#include <unistd.h>

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
