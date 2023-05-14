#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <string>

#include "Point.hpp"

using namespace std;
namespace ariel {
    class Character {
        Point _location;
        int _lives;
        string _name;

    public:

        Character();

        Character(string &name, Point p, int lives);

        Character(Character const &_other);

        Character(Character &&_other) noexcept;

        virtual ~Character();

        /**
         * @return Is the character alive (has more then 0 lives).
         */
        virtual bool isAlive();

        /**
         * @param _other Reference to another character.
         * @return Distance between the 2 characters.
         */
        double distance(Character *_other);

        /**
         * Reduces the character's lives by the number of hits.
         * @param n Number of hits.
         */
        virtual void hit(int n);

        /**
         * @return The name of the character.
         */
        virtual string getName();


        /**
         * Prints the name of the Character, number of lives left AND it's position (as a Point).
         *      IF Character is dead ==> the Character's name will be in parenthesis and lives left won't be printed.
         *
         *      Example (living Character): <name>, 100, (10,3)
         *      Example (dead Character): (<name>), (10,3)
         */
        virtual void print();

        virtual Character &operator=(Character const &_other);

    };

}

#endif
