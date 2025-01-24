/*
** EPITECH PROJECT, 2025
** ex01
** File description:
** Parts.cpp
*/

#include "Parts.hpp"

#include <iostream>
#include <format>

Arms::Arms(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

void Arms::informations()
{
    std::cout << std::format(
        "\t[Parts] Arms {} status : {}\n",
        this->_serial, this->_functional ? "OK" : "KO");
}

Legs::Legs(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

void Legs::informations()
{
    std::cout << std::format(
        "\t[Parts] Legs {} status : {}\n",
        this->_serial, this->_functional ? "OK" : "KO");
}

Head::Head(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

void Head::informations()
{
    std::cout << std::format(
        "\t[Parts] Head {} status : {}\n",
        this->_serial, this->_functional ? "OK" : "KO");
}
