/*
** EPITECH PROJECT, 2025
** ex01
** File description:
** Parts.hpp
*/

#ifndef PARTS_HPP
    #define PARTS_HPP

    #include <string>

class Arms
{
    public:
        explicit Arms(std::string serial = "A-01", bool functional = true);
        bool isFunctional() const { return this->_functional; }
        std::string serial() const { return this->_serial; }
        void informations() const;

    protected:
        bool _functional;
        std::string _serial;
};

class Legs
{
    public:
        explicit Legs(std::string serial = "L-01", bool functional = true);
        bool isFunctional() const { return this->_functional; }
        std::string serial() const { return this->_serial; }
        void informations() const;

    protected:
        bool _functional;
        std::string _serial;
};

class Head
{
    public:
        explicit Head(std::string serial = "H-01", bool functional = true);
        bool isFunctional() const { return this->_functional; }
        std::string serial() const { return this->_serial; }
        void informations() const;

    protected:
        bool _functional;
        std::string _serial;
};
#endif //PARTS_HPP
