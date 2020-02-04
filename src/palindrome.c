/*
** EPITECH PROJECT, 2020
** Palindrome.c
** File description:
** Palindrome.c
*/

#include "../include/palindrome.h"
#include <unistd.h>

int check_state_str(char *str)
{
    int check = 0;

    for (int i = 0; str[i] != '\0'; i++) {    
        if (str[i] >= 97 && str[i] <= 122) {
        } else {
            check++;
        }
    }
    if (check == 0) {
        return (0);
    }
    return (84);
}

char *rm_majs(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    return (str);
}

int palindrome(char *str)
{
    str = rm_majs(str);
    if(check_state_str(str) == 84)
        return (84);
    if (checker(str) == 1)
        my_putstr("not a palindrome.\n");
    else
        my_putstr("palindrome!\n");
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, "Error: missing arguments.\n", 27);
        return (84);
    }
    if (palindrome(av[1]) == 84) {
        write(2, "Error: missing arguments.\n", 27);
        return (84);
    }
    return (0);
}
