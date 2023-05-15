#ifndef TRAINED_NINJA_HPP
#define TRAINED_NINJA_HPP

#include "Ninja.hpp"

namespace ariel {
    class TrainedNinja : public Ninja {
    public:

        TrainedNinja();

        /**
         * Starts with speed 12 and 120 lives.
         */
        TrainedNinja(const string &name, Point &point);

        TrainedNinja(TrainedNinja const &_other);

        TrainedNinja(TrainedNinja *_other);

        TrainedNinja(TrainedNinja &&_other) noexcept;

        ~TrainedNinja();

        void slash(Character *enemy) override;

        void move(Character *enemy) override;
    };

}

#endif
