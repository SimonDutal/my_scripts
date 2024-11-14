/*
** EPITECH PROJECT, 2024
** star
** File description:
** laserstar
*/

#include <stdlib.h>
#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static void part1(int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size * 3 - i - 1; j++) {
            my_putchar(' ');
        }
        if (size == 1) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int j = 0; j < i * 2 - 1; j++) {
            my_putchar(' ');
        }
        if (i != 0) {
            my_putchar('*');
        }
        my_putchar('\n');
    }
}

static void part2(int size)
{
    for (int i = 0; i < size * 2 + 1; i++) {
        my_putchar('*');
    }
    for (int i = 0; i < (size - 1) * 2 - 1 && size != 1; i++) {
        my_putchar(' ');
    }
    if (size == 1) {
        my_putchar(' ');
    }
    for (int i = 0; i < size * 2 + 1; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

static void part3(int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i + 1; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int j = 0; j < (size - i) * 2 + (size - 1) * 4 - 1; j++) {
            my_putchar(' ');
        }
        if (size == 1) {
            my_putchar(' ');
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
    }
}

static void part4(int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int j = 0; j < i * 2 + (size - 1) * 4 + 3; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
    }
}

static void part5(int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size * 2 + i; j++) {
            my_putchar(' ');
        }
        if (size == 1) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int j = 0; j < (size - i) * 2 - 3 && i != size - 1; j++) {
            my_putchar(' ');
        }
        if (i != size - 1) {
            my_putchar('*');
        }
        my_putchar('\n');
    }
}

static void star(int size)
{
    if (size == 0) {
        return ;
    }
    part1(size);
    part2(size);
    part3(size);
    part4(size);
    part2(size);
    part5(size);
}

static int str_to_int(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10 + str[i] - 48;
        }
    }
    return (nb);
}

int main(int ac, char **av)
{
    if (ac != 2) {
	write(1, "invalid args\n", 13);
	return (84);
    }
    star(str_to_int(av[1]));
    return (0);
}
