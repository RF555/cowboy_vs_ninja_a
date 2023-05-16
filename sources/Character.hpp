#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>
#include <string>

#include "Point.hpp"

using namespace std;
namespace ariel {
    class Character {

    protected:

        Point _location;
        int _lives;
        string _name;

    private:


    public:

        Character();

        explicit Character(int lives);

        Character(const string &name, Point point, int lives);

        Character(Character const &_other);

        Character(Character &&_other) noexcept;

        virtual ~Character();

        Point &getLocation();

        int getLives() const;

        Character &operator=(const Character &_other);

        // I/O operations:
        friend std::ostream &operator<<(ostream &output, Character &_other);

        /**
         * @return Is the character alive (has more then 0 lives).
         */
        virtual bool isAlive();

        /**
         * @param _other Reference to another character.
         * @return Distance between the 2 characters.
         */
        double distance(Character &_other);

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
         *
         * @return  A string of the name of the Character, number of lives left AND it's position (as a Point).
         *          IF Character is dead ==> the Character's name will be in parenthesis and lives left won't be printed.
         *
         *          Example (living Character): <name>, 100, (10,3)
         *          Example (dead Character): (<name>), (10,3)
         */
        virtual string print();

        virtual explicit operator std::string();

        virtual ostream &toPrint(ostream &output) = 0;

    };

}

#endif
