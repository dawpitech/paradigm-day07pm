/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** main.cpp
*/

#include <iostream>

#include "KreogCom.hpp"

int main()
{
    KreogCom k(42, 42, 101010);

    std::cout << "Has partner after creation: " << (k.getCom() != nullptr)
              << std::endl;
    k.addCom(35, 25, 35);
    std::cout << "Has partner after AddPartner(): " << (k.getCom() != nullptr)
              << std::endl;

    k.removeCom();
    std::cout << "Has partner after KillPartner(): " << (k.getCom() != nullptr)
              << std::endl;

    k.addCom(56, 25, 65);
    k.addCom(73, 34, 51);
    k.addCom(20, 8, 109);
    std::cout << "==========" << std::endl;

    k.locateSquad();
    std::cout << "==========" << std::endl;
    k.ping();
    std::cout << "==========" << std::endl;

    k.getCom()->ping();

    std::cout << "==========" << std::endl;
    k.getCom()->removeCom();
    k.locateSquad();
    std::cout << "==========" << std::endl;

    k.addCom(10, 10, 10);
    k.removeCom();
    k.removeCom();
    k.removeCom();

    std::cout << "==========" << std::endl;
    k.locateSquad();
    std::cout << "==========" << std::endl;
    k.ping();

    std::cout << "\n\n";

    KreogCom a(1, 1, 1);
    a.addCom(2, 2, 2);
    a.addCom(3, 3, 3);
    a.addCom(4, 4, 4);

    a.locateSquad();

    std::cout << "==========" << std::endl;

    delete a.getCom()->getCom();
    a.locateSquad();

    return 0;
}
