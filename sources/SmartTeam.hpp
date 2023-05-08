#ifndef SMARTTEAM_HPP
#define SMARTTEAM_HPP

#include "Team.hpp"

namespace ariel {
    /**
 * Iteration order: ???
 */
    class SmartTeam : public Team {
    public:
        SmartTeam();

        SmartTeam(Character &leader);

        SmartTeam(Team2 const &_other);

        SmartTeam(Team2 &&_other) noexcept;

        ~SmartTeam();
    };

}
#endif
