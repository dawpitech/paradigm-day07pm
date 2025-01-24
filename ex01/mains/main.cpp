/*
** EPITECH PROJECT, 2025
** ex01
** File description:
** main.cpp
*/

#include <iostream>

#include "KoalaBot.hpp"

int main()
{
    KoalaBot kb;

    std::cout << std::boolalpha << kb.status() << std::endl;
    kb.informations();
    return 0;
}
