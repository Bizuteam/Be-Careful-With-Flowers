#ifndef DEF_MONSTER
#define DEF_MONSTER

#include "character.hpp"

class Monster : public Character {

	private:
    std::vector<std::string> possibleLoots;

	public:
    Monster(std::string name);

    void setPossibleLoots();

    std::vector<std::string> getPossibleLoots();

		virtual std::string toString();
};

#endif
