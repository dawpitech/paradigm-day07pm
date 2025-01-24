/*
** EPITECH PROJECT, 2025
** paradigm-day07pm
** File description:
** Skat.cpp
*/

#include "Skat.hpp"

#include <iostream>
#include <format>

Skat::Skat(const std::string& name, int stimPaks)
{
    this->_name = name;
    this->_stimPaks = stimPaks;
}

int* Skat::stimPaks()
{
    return &this->_stimPaks;
}

const std::string& Skat::name()
{
    return this->_name;
}

void Skat::shareStimPaks(int number, int* stock)
{
    if (number > this->_stimPaks) {
        std::cout << "Don't be greedy\n";
        return;
    }
    *stock += number;
    this->_stimPaks -= number;
    std::cout << "Keep the change.\n";
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0) {
        std::cout << "Hey boya, did you forget something?\n";
        return;
    }
    this->_stimPaks += static_cast<int>(number);
}

void Skat::useStimPaks()
{
    if (this->_stimPaks == 0) {
        std::cout << "Mediiiiiic\n";
        return;
    }
    std::cout << "Time to kick some ass and chew bubble gum.\n";
    this->_stimPaks -= 1;
}

void Skat::status()
{
    std::cout << std::format(""
        "Soldier {} reporting {} stimpaks remaining sir!\n",
        this->_name, this->_stimPaks);
}
