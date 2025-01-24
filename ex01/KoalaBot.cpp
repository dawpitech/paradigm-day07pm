/*
** EPITECH PROJECT, 2025
** ex01
** File description:
** KoalaBot.cpp
*/

#include "KoalaBot.hpp"

#include <iostream>

void KoalaBot::swapParts(Arms* part)
{
    const Arms old_part = this->_arms;
    this->_arms = *part;
    *part = old_part;
}

void KoalaBot::swapParts(Legs* part)
{
    const Legs old_part = this->_legs;
    this->_legs = *part;
    *part = old_part;
}

void KoalaBot::swapParts(Head* part)
{
    const Head old_part = this->_head;
    this->_head = *part;
    *part = old_part;
}

void KoalaBot::informations()
{
    std::cout << "[KoalaBot] " << this->_serial << std::endl;
    this->_arms.informations();
    this->_legs.informations();
    this->_head.informations();
}

bool KoalaBot::status()
{
    return this->_arms.isFunctional() && this->_legs.isFunctional()
        && this->_head.isFunctional();
}
