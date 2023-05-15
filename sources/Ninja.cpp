#include "Ninja.hpp"

namespace ariel {

    Ninja::Ninja() :
            Character(),
            _speed(0) {}

    Ninja::Ninja(int lives, int speed) :
            Character(lives),
            _speed(speed) {}

    Ninja::Ninja(const string &name, Point point, int lives, int speed) :
            Character(name, point, lives),
            _speed(speed) {}

    Ninja::Ninja(const Ninja &_other) {}

    Ninja::Ninja(Ninja *_other) {}

    Ninja::Ninja(Ninja &&_other) noexcept {}

    Ninja::~Ninja() {}

    ostream &Ninja::toPrint(ostream &output) {
        return output << this->print();
    }

    string Ninja::print() {
        return Character::print();
    }

    Ninja::operator std::string() const {
        return "N " + Character::operator std::string();
    }

    int Ninja::getSpeed() const {
        return _speed;
    }

}