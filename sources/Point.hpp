#ifndef POINT_HPP
#define POINT_HPP

namespace ariel {
    class Point {
        double x, y;
    public:
        Point();

        Point(double _x, double y);

        Point(Point &_other);

        Point(Point &&_other) noexcept;

        ~Point();

        /**
         * @param _p A point.
         * @return Distance between the 2 points.
         */
        double distance(Point _p);

        /**
         * Prints the x and y coordinates inside of parenthesis.
         *      Example: (x,y)
         */
        void print();

        /**
         * Find the closest point to 'dest', that is not further then 'len' from 'src'.
         * @param src Source point.
         * @param dest Destination point.
         * @param len Distance from the source point.
         * @return A point between 'src' and 'dest'.
         */
        Point moveTowards(Point src, Point dest, double len);

        Point &operator=(Point const &_other);

    };

}

#endif //POINT_HPP
