/*
** EPITECH PROJECT, 2025
** ex01
** File description:
** KoalaBot.hpp
*/

#ifndef KOALABOT_HPP
    #define KOALABOT_HPP

    #include "Parts.hpp"

class KoalaBot
{
    public:
        void setParts(const Arms& part) { this->_arms = part; }
        void setParts(const Legs& part) { this->_legs = part; }
        void setParts(const Head& part) { this->_head = part; }
        void swapParts(Arms& part);
        void swapParts(Legs& part);
        void swapParts(Head& part);
        void informations();
        bool status();

    protected:
        Arms _arms;
        Legs _legs;
        Head _head;
        std::string _serial = "Bob-01";
};
#endif //KOALABOT_HPP
