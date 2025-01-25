/*
** EPITECH PROJECT, 2025
** ex03
** File description:
** Phaser.cpp
*/

#include <format>
#include <iostream>

#include "Phaser.hpp"
#include "Sounds.hpp"

std::string static getSound(const Phaser::AmmoType ammoType)
{
    switch (ammoType)
    {
        case Phaser::REGULAR:
            return Sounds::Regular;
        case Phaser::PLASMA:
            return Sounds::Plasma;
        case Phaser::ROCKET:
            return Sounds::Rocket;
        default:
            return "?";
    }
}

std::string static getAmmoTypeLiteral(const Phaser::AmmoType ammoType)
{
    switch (ammoType)
    {
        case Phaser::REGULAR:
            return "regular";
        case Phaser::PLASMA:
            return "plasma";
        case Phaser::ROCKET:
            return "rocket";
        default:
            return "?";
    }
}

Phaser::Phaser(int maxAmmo, AmmoType type)
{
    this->_maxAmmos = maxAmmo;
    this->_defaultAmmoType = type;
    while(this->getCurrentAmmos() < this->_maxAmmos) {
        this->addAmmo(this->_defaultAmmoType);
    }
}

Phaser::~Phaser()
{
    while(this->getCurrentAmmos() > 0)
        this->_ammos.pop_back();
}


void Phaser::fire()
{
    if (this->Empty || this->getCurrentAmmos() == 0) {
        std::cout << "Clip empty, please reload\n";
        return;
    }
    std::cout << getSound(this->_ammos.back()) << "\n";
    this->_ammos.pop_back();
}

void Phaser::changeType(AmmoType newType)
{
    std::cout << std::format("Switching ammo to type: {}\n",
        getAmmoTypeLiteral(newType));
    this->_defaultAmmoType = newType;
}

void Phaser::reload()
{
    std::cout << "Reloading...\n";
    while(this->getCurrentAmmos() < this->_maxAmmos) {
        this->addAmmo(this->_defaultAmmoType);
    }
}

void Phaser::addAmmo(AmmoType type)
{
    if (this->getCurrentAmmos() == this->_maxAmmos) {
        std::cout << "Clip full\n";
        return;
    }
    this->_ammos.push_back(type);
}
