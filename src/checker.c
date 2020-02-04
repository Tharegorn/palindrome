/*
** EPITECH PROJECT, 2020
** checker.c
** File description:
** checker.c
*/

#include "../include/palindrome.h"
#include <unistd.h>

int checker(char *str)
{
    int count = 0;
    int len = my_strlen(str);
    int a = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[len - a]) {
        } else {
            count++;
        }
        a++;
    }
    if (count == 0)
        return (0);
    return (1);
}
