#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include <memory>
#include "Weapon.h"
#include "Spell.h"

class Character {
protected:
    std::string name;
    unsigned int level;
    int health;
    int max_health;
    int mana;
    int max_mana;
    unsigned int health_up;
    unsigned int mana_up;
    Weapon weapon; 
    Spell spell;

public:
    Character(const std::string& n, int l, int h, int mh, int m, int mm, int hu, int mu, Weapon w, Spell s);
    void set_dataC(int l, int h, int mh, int m, int mm, int hu, int mu);
    void set_dataW(const std::string& weaponName, int weaponDamage);
    void set_dataS(const std::string& spellName, int spellDamage);
    void lvl_up();
    void use_spell();
    void taking_damage(int damage);
    bool is_alive() const;
    virtual void get_full_info() const;
    std::string getInfC() const;
    std::string getHP() const;
    std::string getInfW() const;
    std::string getInfS() const;
    virtual ~Character();
};

#endif
