#include "doctest.h"
#include "sources/Team.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Build Point") {
    Point a;
    CHECK_EQ(a.getX(), 0);
    CHECK_EQ(a.getY(), 0);
    Point b(1.003, 2);
    CHECK_EQ(b.getX(), 1.003);
    CHECK_EQ(b.getY(), 2);

}

TEST_CASE("Points distance") {
    Point a;
    Point b(0, 1);
    CHECK(a.distance(b) == 1);
    CHECK(b.distance(a) == 1);
    Point c(0, 2);
    CHECK(a.distance(c) == 2);
    CHECK(c.distance(a) == 2);
    Point d(0, 3);
    CHECK(a.distance(d) == 3);
    CHECK(d.distance(a) == 3);
    Point e(4, 0);
    CHECK(a.distance(e) == 4);
    CHECK(e.distance(a) == 4);
    Point f(4, 3);
    CHECK(a.distance(f) == 5);
    CHECK(f.distance(a) == 5);
    Point g(3, 4);
    CHECK(a.distance(g) == 5);
    CHECK(g.distance(a) == 5);
}