#ifndef DEF_PLAYERCHARACTER
#define DEF_PLAYERCHARACTER

#include <map>

#include "character.hpp"

class PlayerChar : public Character {

	private:
    //std::map<std::string, Item> inventory;
    //std::map<std::string, Item> equips;

	public:
    PlayerChar(std::string name);

    void setInventory();
    void setEquips();

    //std::map<std::string, Item> getInventory();
    //std::map<std::string, Item> getEquips();

		virtual std::string toString();
};

#endif
