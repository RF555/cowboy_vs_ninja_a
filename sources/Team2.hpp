#ifndef TEAM2_HPP
#define TEAM2_HPP

#include "Team.hpp"

namespace ariel {
    /**
 * Iteration order: FIFO (without distinguishing between cowboys and ninjas)
 */
    class Team2 : public Team {
    public:
        Team2();

        Team2(Character &leader);

        Team2(Team2 const &_other);

        Team2(Team2 &&_other) noexcept;

        ~Team2();
    };

}

#endif
