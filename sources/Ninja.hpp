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
         * Moves the ninja towards the enemy the distance equivalent to it's speed.
         * @param enemy Reference of an enemy to move towards to.
         */
        void move(Character &enemy);

        /**
         * Slush the enemy - IF the ninja is alive AND is less then 1 from the enemy:
         *                      subtract 31 lives from the enemy.
         * @param enemy Reference to an enemy.
         */
        void slash(Character &enemy);
    };

}

#endif
