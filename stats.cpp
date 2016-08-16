#include "stats.hpp"

Stats::Stats() {
  setBaseStats();
  setBonusStats();
  setPercentBaseStats();
  setPercentStats();
  updateTotalStats();
  updateFinalStats();
}

void Stats::updateTotalStats() {
  updateTotalHealth();
  updateTotalMana();
  updateTotalStrength();
  updateTotalConstitution();
  updateTotalAgility();
  updateTotalDexterity();
  updateTotalIntelligence();
}

void Stats::updateTotalHealth() {
  total_health = (((base_health*percent_base_health) + bonus_health)*percent_health);
}

void Stats::updateTotalMana() {
  total_mana = (((base_mana*percent_base_mana) + bonus_mana)*percent_mana);
}

void Stats::updateTotalStrength() {
  total_strength = (((base_strength*percent_base_strength) + bonus_strength)*percent_strength);
}

void Stats::updateTotalConstitution() {
  total_constitution = (((base_constitution*percent_base_constitution) + bonus_constitution)*percent_constitution);
}

void Stats::updateTotalAgility() {
  total_agility = (((base_agility*percent_base_agility) + bonus_agility)*percent_agility);
}

void Stats::updateTotalDexterity() {
  total_dexterity = (((base_dexterity*percent_base_dexterity) + bonus_dexterity)*percent_dexterity);
}

void Stats::updateTotalIntelligence() {
  total_mana = (((base_intelligence*percent_base_intelligence) + bonus_intelligence)*percent_intelligence);
}

void Stats::updateFinalStats() {
  updateHealth();
  updateMana();
  updateAttack();
  updateMagicAttack();
  updateDefense();
  updateMagicDefense();
  updateDodge();
  updateHit();
}

void Stats::updateHealth() {
  health = (total_health + (total_constitution*0.5));
}

void Stats::updateMana() {
  mana = (total_mana + (total_intelligence*0.5));
}

void Stats::updateAttack() {
  attack = (total_strength);
}

void Stats::updateMagicAttack() {
  magic_attack = (total_intelligence);
}

void Stats::updateDefense() {
  defense = (total_constitution*0.75);
}

void Stats::updateMagicDefense() {
  magic_defense = ((total_constitution*0.4) + (total_intelligence*0.35));
}

void Stats::updateDodge() {
  dodge = ((total_agility*0.8) + (total_dexterity*0.2));
}

void Stats::updateHit() {
  hit = (total_dexterity);
}

// Setters
void Stats::setBaseStats() {
  setBaseHealth(0);
  setBaseMana(0);
  setBaseStrength(0);
  setBaseConstitution(0);
  setBaseAgility(0);
  setBaseDexterity(0);
  setBaseIntelligence(0);
}

void Stats::setBonusStats() {
  setBonusHealth(0);
  setBonusMana(0);
  setBonusStrength(0);
  setBonusConstitution(0);
  setBonusAgility(0);
  setBonusDexterity(0);
  setBonusIntelligence(0);
}

void Stats::setPercentBaseStats() {
  setPercentBaseHealth(1);
  setPercentBaseMana(1);
  setPercentBaseStrength(1);
  setPercentBaseConstitution(1);
  setPercentBaseAgility(1);
  setPercentBaseDexterity(1);
  setPercentBaseIntelligence(1);
}

void Stats::setPercentStats() {
  setPercentHealth(1);
  setPercentMana(1);
  setPercentStrength(1);
  setPercentConstitution(1);
  setPercentAgility(1);
  setPercentDexterity(1);
  setPercentIntelligence(1);
}

void Stats::setBaseHealth(int newValue) {
  base_health = newValue;
}

void Stats::setBaseMana(int newValue) {
  base_mana = newValue;
}

void Stats::setBaseStrength(int newValue) {
  base_strength = newValue;
}

void Stats::setBaseConstitution(int newValue){
  base_constitution = newValue;
}

void Stats::setBaseAgility(int newValue) {
  base_agility = newValue;
}

void Stats::setBaseDexterity(int newValue) {
  base_dexterity = newValue;
}

void Stats::setBaseIntelligence(int newValue) {
  base_intelligence = newValue;
}

void Stats::setBonusHealth(int newValue) {
  bonus_health = newValue;
}

void Stats::setBonusMana(int newValue) {
  bonus_mana = newValue;
}

void Stats::setBonusStrength(int newValue) {
  bonus_strength = newValue;
}

void Stats::setBonusConstitution(int newValue) {
  bonus_constitution = newValue;
}

void Stats::setBonusAgility(int newValue) {
  bonus_agility = newValue;
}

void Stats::setBonusDexterity(int newValue) {
  bonus_dexterity = newValue;
}

void Stats::setBonusIntelligence(int newValue) {
  bonus_intelligence = newValue;
}

void Stats::setPercentBaseHealth(int newValue) {
  percent_base_health = newValue;
}

void Stats::setPercentBaseMana(int newValue) {
  percent_base_mana = newValue;
}

void Stats::setPercentBaseStrength(int newValue) {
  percent_base_strength = newValue;
}

void Stats::setPercentBaseConstitution(int newValue) {
  percent_base_constitution = newValue;
}

void Stats::setPercentBaseAgility(int newValue) {
  percent_base_agility = newValue;
}

void Stats::setPercentBaseDexterity(int newValue) {
  percent_base_dexterity = newValue;
}

void Stats::setPercentBaseIntelligence(int newValue) {
  percent_base_intelligence = newValue;
}

void Stats::setPercentHealth(int newValue) {
  percent_health = newValue;
}

void Stats::setPercentMana(int newValue) {
  percent_mana = newValue;
}

void Stats::setPercentStrength(int newValue) {
  percent_strength = newValue;
}

void Stats::setPercentConstitution(int newValue) {
  percent_constitution = newValue;
}

void Stats::setPercentAgility(int newValue) {
  percent_agility = newValue;
}

void Stats::setPercentDexterity(int newValue) {
  percent_dexterity = newValue;
}

void Stats::setPercentIntelligence(int newValue) {
  percent_intelligence = newValue;
}

// Getters
int Stats::getBaseHealth() {
  return base_health;
}

int Stats::getBaseMana() {
  return base_mana;
}

int Stats::getBaseStrength() {
  return base_strength;
}

int Stats::getBaseConstitution() {
  return base_constitution;
}

int Stats::getBaseAgility() {
  return base_agility;
}

int Stats::getBaseDexterity() {
  return base_dexterity;
}

int Stats::getBaseIntelligence() {
  return base_intelligence;
}

int Stats::getBonusHealth() {
  return bonus_health;
}

int Stats::getBonusMana() {
  return bonus_mana;
}

int Stats::getBonusStrength() {
  return bonus_strength;
}

int Stats::getBonusConstitution() {
  return bonus_constitution;
}

int Stats::getBonusAgility() {
  return bonus_agility;
}

int Stats::getBonusDexterity() {
  return bonus_dexterity;
}

int Stats::getBonusIntelligence() {
  return bonus_intelligence;
}

int Stats::getPercentBaseHealth() {
  return percent_base_health;
}

int Stats::getPercentBaseMana() {
  return percent_base_mana;
}

int Stats::getPercentBaseStrength() {
  return percent_base_strength;
}

int Stats::getPercentBaseConstitution() {
  return percent_base_constitution;
}

int Stats::getPercentBaseAgility() {
  return percent_base_agility;
}

int Stats::getPercentBaseDexterity() {
  return percent_base_dexterity;
}

int Stats::getPercentBaseIntelligence() {
  return percent_base_intelligence;
}

int Stats::getpercentHealth() {
  return percent_health;
}

int Stats::getpercentMana() {
  return percent_mana;
}

int Stats::getpercentStrength() {
  return percent_strength;
}

int Stats::getpercentConstitution() {
  return percent_constitution;
}

int Stats::getpercentAgility() {
  return percent_agility;
}

int Stats::getpercentDexterity() {
  return percent_dexterity;
}

int Stats::getpercentIntelligence() {
  return percent_intelligence;
}

int Stats::getTotalHealth() {
  return total_health;
}

int Stats::getTotalMana() {
  return total_mana;
}

int Stats::getTotalStrength() {
  return total_strength;
}

int Stats::getTotalConstitution(){
  return total_constitution;
}

int Stats::getTotalAgility() {
  return total_agility;
}

int Stats::getTotalDexterity() {
  return total_dexterity;
}

int Stats::getTotalIntelligence() {
  return total_intelligence;
}

int Stats::getHealth() {
  return health;
}

int Stats::getMana() {
  return mana;
}

int Stats::getAttack() {
  return attack;
}

int Stats::getMagicAttack() {
  return magic_attack;
}

int Stats::getDefense() {
  return defense;
}

int Stats::getMagicDefense() {
  return magic_defense;
}

int Stats::getDodge() {
  return dodge;
}

int Stats::getHit() {
  return hit;
}

std::string Stats::toString() {
  return "notyet.";
}
