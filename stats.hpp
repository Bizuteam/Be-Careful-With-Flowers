#ifndef DEF_STATS
#define DEF_STATS

#include <iostream>

class Stats {

	private:
		// Base stats
    int base_health;
    int base_mana;
		int base_strength;
    int base_constitution;
    int base_agility;
    int base_dexterity;
    int base_intelligence;

		// Passive raw bonuses coming from equips or skills
    int bonus_health;
    int bonus_mana;
    int bonus_strength;
    int bonus_constitution;
    int bonus_agility;
    int bonus_dexterity;
    int bonus_intelligence;

		/* Passive percentage bonuses coming from equis or skills that
		only affect base stats.*/
    int percent_base_health;
    int percent_base_mana;
    int percent_base_strength;
    int percent_base_constitution;
    int percent_base_agility;
    int percent_base_dexterity;
    int percent_base_intelligence;

		/* Passive percentage bonuses coming from equis or skills that
		affect both badic and bonus stats.*/
    int percent_health;
    int percent_mana;
    int percent_strength;
    int percent_constitution;
    int percent_agility;
    int percent_dexterity;
    int percent_intelligence;

		// Final values of basic stats.
    int total_health;
    int total_mana;
		int total_strength;
    int total_constitution;
    int total_agility;
    int total_dexterity;
    int total_intelligence;

		// Effective stats used in battle.
    int health;
    int mana;
    int attack;
    int magic_attack;
    int defense;
    int magic_defense;
    int dodge;
    int hit;

	public:
		Stats();

		// Updater
		void updateTotalStats();
		void updateTotalHealth();
    void updateTotalMana();
    void updateTotalStrength();
    void updateTotalConstitution();
    void updateTotalAgility();
    void updateTotalDexterity();
    void updateTotalIntelligence();

		void updateFinalStats();
		void updateHealth();
    void updateMana();
    void updateAttack();
    void updateMagicAttack();
    void updateDefense();
    void updateMagicDefense();
    void updateDodge();
		void updateHit();

		// Setters
		void setBaseStats();
		void setBonusStats();
		void setPercentBaseStats();
		void setPercentStats();

    void setBaseHealth(int newValue);
    void setBaseMana(int newValue);
    void setBaseStrength(int newValue);
    void setBaseConstitution(int newValue);
    void setBaseAgility(int newValue);
    void setBaseDexterity(int newValue);
    void setBaseIntelligence(int newValue);

    void setBonusHealth(int newValue);
    void setBonusMana(int newValue);
    void setBonusStrength(int newValue);
    void setBonusConstitution(int newValue);
    void setBonusAgility(int newValue);
    void setBonusDexterity(int newValue);
    void setBonusIntelligence(int newValue);

    void setPercentBaseHealth(int newValue);
    void setPercentBaseMana(int newValue);
    void setPercentBaseStrength(int newValue);
    void setPercentBaseConstitution(int newValue);
    void setPercentBaseAgility(int newValue);
    void setPercentBaseDexterity(int newValue);
    void setPercentBaseIntelligence(int newValue);

    void setPercentHealth(int newValue);
    void setPercentMana(int newValue);
    void setPercentStrength(int newValue);
    void setPercentConstitution(int newValue);
    void setPercentAgility(int newValue);
    void setPercentDexterity(int newValue);
    void setPercentIntelligence(int newValue);

    void setHealth();
    void setMana();
    void setAttack();
    void setMagicAttack();
    void setDefense();
    void setMagicDefense();
    void setDodge();
    void setHit();

		// Getters
    int getBaseHealth();
    int getBaseMana();
    int getBaseStrength();
    int getBaseConstitution();
    int getBaseAgility();
    int getBaseDexterity();
    int getBaseIntelligence();

    int getBonusHealth();
    int getBonusMana();
    int getBonusStrength();
    int getBonusConstitution();
    int getBonusAgility();
    int getBonusDexterity();
    int getBonusIntelligence();

    int getPercentBaseHealth();
    int getPercentBaseMana();
    int getPercentBaseStrength();
    int getPercentBaseConstitution();
    int getPercentBaseAgility();
    int getPercentBaseDexterity();
    int getPercentBaseIntelligence();

    int getpercentHealth();
    int getpercentMana();
    int getpercentStrength();
    int getpercentConstitution();
    int getpercentAgility();
    int getpercentDexterity();
    int getpercentIntelligence();

    int getTotalHealth();
    int getTotalMana();
    int getTotalStrength();
    int getTotalConstitution();
    int getTotalAgility();
    int getTotalDexterity();
    int getTotalIntelligence();

    int getHealth();
    int getMana();
    int getAttack();
    int getMagicAttack();
    int getDefense();
    int getMagicDefense();
    int getDodge();
    int getHit();

		std::string toString();
};

#endif
