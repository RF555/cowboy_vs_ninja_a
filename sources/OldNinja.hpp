#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP

#include "Ninja.hpp"

namespace ariel {
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
#endif
