#ifndef YOUNG_NINJA_HPP
#define YOUNG_NINJA_HPP

#include "Ninja.hpp"

namespace ariel {
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

}

#endif
