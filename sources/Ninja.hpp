#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"

namespace ariel{
    class Ninja : public Character {
        int speed;

    public:

        Ninja();

        Ninja(const char *name, Point p);

        Ninja(Ninja const &_other);

        Ninja(Ninja *_other);

        Ninja(Ninja &&_other) noexcept;

        ~Ninja();

        /**
         * Prints the Ninja AS Character with 'N' before it's name.
         */
        void print();

        /**
         * Moves the ninja towards the enemy the distance equivalent to it's speed.
         * @param enemy Reference of an enemy to move towards to.
         */
        void move(Character &enemy);

        /**
         * Slush the enemy - IF the ninja is alive AND is less then (or equal) 1m from the enemy:
         *                      subtract 40 lives from the enemy.
         * @param enemy Reference to an enemy.
         */
        void slash(Character &enemy);
    };

}

#endif
