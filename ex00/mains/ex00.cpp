/*
** EPITECH PROJECT, 2025
** paradigm-day07pm
** File description:
** ex01.cpp
*/

#include <iostream>

#include "Skat.hpp"

int main()
{
    Skat s("Junior", 5);

    std::cout << "Soldier " << s.name() << std::endl;
    s.status();
    s.useStimPaks();

    return 0;
}
