/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** main.cpp
*/

#include <iostream>

#include "Phaser.hpp"
#include "Sounds.hpp"

const std::string Sounds::Plasma = "Blop...BOUM";
const std::string Sounds::Regular = "bzz...ZAP";
const std::string Sounds::Rocket = "CLONC.......KABOUM";

int main()
{
    Phaser p(5, Phaser::ROCKET);
    p.fire();
    p.reload();
    std::cout << "Firing all ammunition " << std::endl;
    while (p.getCurrentAmmos() > 0)
        p.fire();
    return 0;
}
