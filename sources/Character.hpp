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

        ~Character();

        /**
         * @return Is the character alive (has more then 0 lives).
         */
        bool isAlive();

        /**
         * @param _other Reference to another character.
         * @return Distance between the 2 characters.
         */
        double distance(Character *_other);

        /**
         * Reduces the character's lives by the number of hits.
         * @param n Number of hits.
         */
        void hit(int n);

        /**
         * @return The name of the character.
         */
        string getName();


        void print();

        Character &operator=(Character const &_other);

    };

}

#endif
