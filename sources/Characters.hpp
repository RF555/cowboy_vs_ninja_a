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

    class Cowboy : public Character {
        int n_bullets;

    public:

        Cowboy();

        /**
         * Starts with 6 bullets and 110 lives.
         */
        Cowboy(const char *name, Point p);

        Cowboy(Cowboy const &_other);

        Cowboy(Cowboy *_other);

        Cowboy(Cowboy &&_other) noexcept;

        ~Cowboy();

        /**
         * Shoot the enemy - IF the cowboy is alive AND has bullets left:
         *                      subtract 10 lives from the enemy.
         *                      subtract 1 bullet from the cowboy.
         * @param enemy Reference to an enemy.
         */
        void shoot(Character &enemy);

        /**
         * @return True if the cowboy has bullets left.
         */
        bool hasboolets();

        /**
         * Reloads 6 bullets.
         */
        void reload();

    };

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

    class YoungNinja : public Ninja {
    public:
        YoungNinja();

        /**
         * Starts with speed 14 and 100 lives.
         */
        YoungNinja(const char *name, Point p);

        YoungNinja(YoungNinja const &_other);

        YoungNinja(YoungNinja *_other);

        YoungNinja(YoungNinja &&_other) noexcept;

        ~YoungNinja();
    };

    class TrainedNinja : public Ninja {
    public:

        TrainedNinja();

        /**
         * Starts with speed 12 and 120 lives.
         */
        TrainedNinja(const char *name, Point p);

        TrainedNinja(TrainedNinja const &_other);

        TrainedNinja(TrainedNinja *_other);

        TrainedNinja(TrainedNinja &&_other) noexcept;


        ~TrainedNinja();
    };

    class OldNinja : public Ninja {
    public:

        OldNinja();

        /**
         * Starts with speed 8 and 150 lives.
         */
        OldNinja(const char *name, Point p);

        OldNinja(OldNinja const &_other);

        OldNinja(OldNinja *_other);

        OldNinja(OldNinja &&_other) noexcept;

        ~OldNinja();
    };
}

#endif //CHARACTER_HPP
