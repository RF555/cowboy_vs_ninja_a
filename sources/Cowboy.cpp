#include "Cowboy.hpp"

namespace ariel {

    Cowboy::Cowboy() :
            Character(110),
            n_bullets(6) {}

    Cowboy::Cowboy(const string &name, Point point) :
            Character(name, point, 110),
            n_bullets(6) {}

    Cowboy::Cowboy(const Cowboy &_other) :
            Character(_other),
            n_bullets(6) {}

    Cowboy::Cowboy(Cowboy *_other) {}

    Cowboy::Cowboy(Cowboy &&_other) noexcept {}

    Cowboy::~Cowboy() {}

    ostream &Cowboy::toPrint(ostream &output) {
        return output << this->print();
    }

    string Cowboy::print() {
        return std::string();
    }

    void Cowboy::shoot(Character *enemy) {}

    bool Cowboy::hasboolets() {
        return false;
    }

    void Cowboy::reload() { if (this->n_bullets == 0) this->n_bullets = 6; }

    Cowboy::operator std::string() const {
        return "C " + Character::operator std::string();
    }
}