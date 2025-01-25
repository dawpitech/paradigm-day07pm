/*
** EPITECH PROJECT, 2025
** ex03
** File description:
** Phaser.hpp
*/

#ifndef PHASER_HPP
    #define PHASER_HPP

    #include <vector>

class Phaser
{
    public:
        enum AmmoType
        {
            REGULAR,
            PLASMA,
            ROCKET,
        };

        explicit Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
        ~Phaser();
        void fire();
        void ejectClip() { this->_ammos.clear(); }
        void changeType(AmmoType newType);
        void reload();
        void addAmmo(AmmoType type);
        int getCurrentAmmos() const { return static_cast<int>(this->_ammos.size()); }

    private:
        static const int Empty = 0;
        int _maxAmmos;
        std::vector<AmmoType> _ammos;
        AmmoType _defaultAmmoType;

};
#endif //PHASER_HPP
