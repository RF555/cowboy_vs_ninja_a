#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"

namespace ariel {
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

}

#endif
