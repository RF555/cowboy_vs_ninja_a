#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>

using namespace std;
namespace ariel {
    class Point {
        double x, y;
    public:
        Point();

        Point(double _x, double y);

        /**
         * @param _p A point.
         * @return Distance between the 2 points.
         */
        double distance(Point _p);

        void print();

        /**
         * Find the closest point to 'dest', that is not further then 'len' from 'src'.
         * @param src Source point.
         * @param dest Destination point.
         * @param len Distance from the source point.
         * @return A point between 'src' and 'dest'.
         */
        Point moveTowards(Point src, Point dest, double len);

    };


    class Character {
        Point _location;
        int _lives;
        string _name;

    public:


        /**
         * @return Is the character alive (has more then 0 lives).
         */
        bool isAlive();

        /**
         * @param _other Pointer to another character.
         * @return Distance between the 2 characters.
         */
        double distance(Character *_other);

        /**
         * Reduces the character's lives by the number of hits.
         * @param n Number of hits.
         */
        void hit(int n);

        /**
         * @return The name of the character.
         */
        string getName();


        void print();

    };

}
#endif //TEAM_HPP
