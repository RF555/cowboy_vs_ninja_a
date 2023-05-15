#include "Point.hpp"

namespace ariel {
    Point::Point() :
            x_coordinate(0),
            y_coordinate(0) {}

    Point::Point(double _x_coordinate, double _y_coordinate) :
            x_coordinate(_x_coordinate),
            y_coordinate(_y_coordinate) {}

    Point::Point(Point const &_other) :
            x_coordinate(_other.x_coordinate),
            y_coordinate(_other.y_coordinate) {}

    Point::Point(Point &&_other) noexcept {}

    Point::~Point() {}

    double Point::distance(Point _point2) {
        return 0;
    }

    void Point::print() {}

    Point Point::moveTowards(Point src, Point dest, double len) {
        return Point();
    }

    Point &Point::operator=(const Point &_other) {
        return *this;
    }
}