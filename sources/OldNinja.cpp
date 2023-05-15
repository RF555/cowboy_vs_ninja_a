#include "OldNinja.hpp"

namespace ariel {

    OldNinja::OldNinja() :
            Ninja(150, 8) {}

    OldNinja::OldNinja(const string &name, Point point) :
            Ninja(name, point, 150, 8) {}

    OldNinja::OldNinja(const OldNinja &_other) {}

    OldNinja::OldNinja(OldNinja *_other) {}

    OldNinja::OldNinja(OldNinja &&_other) noexcept {}

    OldNinja::~OldNinja() {}

    void OldNinja::slash(Character *enemy) {}

    void OldNinja::move(Character *enemy) {}
}