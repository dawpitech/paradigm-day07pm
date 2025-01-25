/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** KreogCom.cpp
*/

#include <format>
#include <iostream>

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial): m_serial(serial), _x(x), _y(y)
{
    std::cout << std::format("KreogCom {} initialized\n", this->m_serial);
}

KreogCom::~KreogCom()
{
    std::cout << std::format("KreogCom {} shutting down\n", this->m_serial);
}


void KreogCom::addCom(int x, int y, int serial)
{
    const auto new_kreogCom = new KreogCom(x, y, serial);

    new_kreogCom->_nextKreogCom = this->_nextKreogCom;
    this->_nextKreogCom = new_kreogCom;
}

void KreogCom::removeCom()
{
    if (getCom() == nullptr)
        return;
    if (getCom()->getCom() != nullptr)
        return getCom()->removeCom();
    delete getCom();
    this->_nextKreogCom = nullptr;
}

void KreogCom::ping() const
{
    std::cout << std::format(""
        "KreogCom {} currently at {} {}\n",
        this->m_serial, this->_x, this->_y);
}

void KreogCom::locateSquad() const
{
    if (this->_nextKreogCom != nullptr)
        this->_nextKreogCom->locateSquad();
    this->ping();
}
