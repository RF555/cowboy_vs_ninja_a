#include "YoungNinja.hpp"

namespace ariel {

    YoungNinja::YoungNinja() {}

    YoungNinja::YoungNinja(const string &name, Point &point)  :
            Ninja(name, point, 100, 14) {}

    YoungNinja::YoungNinja(const YoungNinja &_other) {}

    YoungNinja::YoungNinja(YoungNinja *_other) {}

    YoungNinja::YoungNinja(YoungNinja &&_other) noexcept {}

    YoungNinja::~YoungNinja() {}

    void YoungNinja::slash(Character *enemy) {}

    void YoungNinja::move(Character *enemy) {}
}