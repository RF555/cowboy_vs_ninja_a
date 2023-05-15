#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>

#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"

using namespace std;
namespace ariel {
    /**
     * Iteration order:
     *      1. all cowboys (FIFO).
     *      2. all ninjas (FIFO).
     */
    class Team {

        Character *_leader;
        vector<Character> members;

//        vector<Cowboy> _cowboys;
//        vector<Ninja> _ninjas;

    public:
        Team();

        Team(Character *leader);

        Team(Character &leader);

        Team(Team const &_other);

        Team(Team &&_other) noexcept;

        virtual ~Team();

        /**
         * Adds the Character to the team.
         * @param member Reference to a Character.
         */
        virtual void add(Character *member);

        /**
         *
         * @param enemies Pointer to the attacked Team.
         */
        virtual void attack(Team *enemies);

        /**
         *
         * @param enemies Reference to the attacked Team.
         */
        virtual void attack(Team &enemies);

        /**
         * @return The number of members still alive.
         */
        virtual int stillAlive();

        /**
         *
         * @return A string of all members of the team.
         */
        virtual string print();

        virtual Team &operator=(Team const &_other);
    };

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
#endif //TEAM_HPP
