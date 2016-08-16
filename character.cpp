#include "character.hpp"

void Character::setID() {

}

void Character::setName() {

}

void Character::setSprite() {

}

void Character::setStats() {

}

void Character::setHealthMax() {
  healthMax = stats.getHealth();
}

void Character::setCurrentHealth() {
  currentHealth = healthMax;
}

void Character::setSkills() {

}

int Character::getID() {
  return ID;
}

std::string Character::getName() {
  return name;
}

std::string Character::getSprite() {
  return sprite;
}

Stats Character::getStats() {
  return stats;
}

int Character::getHealthMax() {
  return healthMax;
}

int Character::getCurrentHealth() {
  return currentHealth;
}

//std::vector<Skill> Character::getSkills() {
//  return skills;
//}

std::string Character::toString() {
  return "not yet";
}
