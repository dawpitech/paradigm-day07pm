/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** KreogCom.hpp
*/

#ifndef KREOGCOM_HPP
    #define KREOGCOM_HPP
#include <vector>

class KreogCom
{
    public:
        KreogCom(int x, int y, int serial);
        ~KreogCom();
        void addCom(int x, int y, int serial);
        void removeCom();
        KreogCom* getCom() {  return this->_nextKreogCom; }
        void ping() const;
        void locateSquad() const;

    protected:
        const int m_serial;
        const int _x;
        const int _y;
        KreogCom* _nextKreogCom = nullptr;
};
#endif //KREOGCOM_HPP
