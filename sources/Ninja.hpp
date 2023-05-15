#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"

namespace ariel {
    class Ninja : public Character {
    private:
        int _speed;

        virtual ostream &toPrint(ostream &output) override;

    public:

        Ninja();

        Ninja(int lives,int speed);

        Ninja(const string &name, Point point, int lives, int speed);

        Ninja(Ninja const &_other);

        Ninja(Ninja *_other);

        Ninja(Ninja &&_other) noexcept;

        int getSpeed() const;

        virtual ~Ninja();

        /**
         * @return A string of the Ninja AS Character with 'N' before it's name.
         */
        string print() override;

        /**
         * Moves the ninja towards the enemy the distance equivalent to it's speed.
         * @param enemy Reference of an enemy to move towards to.
         */
        virtual void move(Character *enemy) = 0;

        /**
         * Slush the enemy - IF the ninja is alive AND is less then (or equal) 1m from the enemy:
         *                      subtract 40 lives from the enemy.
         * @param enemy Reference to an enemy.
         */
        virtual void slash(Character *enemy) = 0;

        explicit operator std::string() const override;

    };

}

#endif
