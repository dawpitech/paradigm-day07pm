/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** main.cpp
*/

#include "KreogCom.hpp"

int main()
{
    KreogCom k(42, 42, 101010);
    k.addCom(56, 25, 65);
    k.addCom(73, 34, 51);
    //k.addCom(0, 0, 10);
    k.locateSquad();
    k.removeCom();
    k.removeCom();
    return 0;
}
