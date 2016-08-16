#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <iostream>
#include <vector>

#include "stats.hpp"

class Character {

  protected:
    int ID;
    std::string name;
		std::string sprite;
    Stats stats;
    int healthMax;
    int currentHealth;
    //std::vector<Skill> skills;

	public:

    void setID();
    void setName();
		void setSprite();
    void setStats();
    void setHealthMax();
    void setCurrentHealth();
    void setSkills();

    int getID();
    std::string getName();
		std::string getSprite();
    Stats getStats();
    int getHealthMax();
    int getCurrentHealth();
    //std::vector<Skill> getSkills();

		virtual std::string toString();
};

#endif
