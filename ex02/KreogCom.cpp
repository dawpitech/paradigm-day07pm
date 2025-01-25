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
    if (this->_nextKreogCom != nullptr)
        this->_nextKreogCom->_prevKreogCom = this->_prevKreogCom;
    auto prev = this->_prevKreogCom;
    if (prev != nullptr)
        prev->_nextKreogCom = this->_nextKreogCom;
}

void KreogCom::addCom(int x, int y, int serial)
{
    const auto new_kreogCom = new KreogCom(x, y, serial);

    new_kreogCom->_nextKreogCom = this->_nextKreogCom;
    new_kreogCom->_prevKreogCom = this;
    this->_nextKreogCom = new_kreogCom;

    if (new_kreogCom->_nextKreogCom != nullptr)
        new_kreogCom->_nextKreogCom->_prevKreogCom = new_kreogCom;
}

void KreogCom::removeCom()
{
    if (this->getCom() != nullptr)
        delete this->getCom();
}

void KreogCom::ping() const
{
    std::cout << std::format(""
        "KreogCom {} currently at {} {}\n",
        this->m_serial, this->_x, this->_y);
}

void KreogCom::locateSquad() const
{
    auto com = this->_nextKreogCom;
    while (com != nullptr) {
        com->ping();
        com = com->_nextKreogCom;
    }
    this->ping();
}
