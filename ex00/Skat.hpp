/*
** EPITECH PROJECT, 2025
** paradigm-day07pm
** File description:
** Skat.hpp
*/

#ifndef SKAT_HPP
    #define SKAT_HPP

    #include <string>

class Skat
{
    public:
        explicit Skat(const std::string& name = "bob", int stimPaks = 15);
        ~Skat() {};

        int* stimPaks();
        const std::string& name();

        void shareStimPaks(int number, int* stock);
        void addStimPaks(unsigned int number);
        void useStimPaks();
        void status();

    private:
        std::string _name;
        int _stimPaks;
};
#endif //SKAT_HPP
