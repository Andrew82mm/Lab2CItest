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
    unsigned int health;
    unsigned int max_health;
    unsigned int mana;
    unsigned int max_mana;
    unsigned int health_up;
    unsigned int mana_up;
    std::unique_ptr<Weapon> weapon;
    std::unique_ptr<Spell> spell;

public:
    Character(const std::string& n, int l, int h, int mh, int m, int mm, int hu, int mu, std::unique_ptr<Weapon> w, std::unique_ptr<Spell> s);
    void set_dataC(int l, int h, int mh, int m, int mm, int hu, int mu);
    void set_dataW(const std::string& weaponName, int weaponDamage);
    void set_dataS(const std::string& spellName, int spellDamage);
    void lvl_up();
    void use_spell();
    void taking_damage();
    bool is_alive() const;
    virtual void get_full_info() const;
    std::string getInfC() const;
    std::string getInfW() const;
    std::string getInfS() const;
    virtual ~Character();
};

#endif
