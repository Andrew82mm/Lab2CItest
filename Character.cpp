#include "Character.h"

Character::Character(const std::string& n, int l, int h, int mh, int m, int mm, int hu, int mu, Weapon w, Spell s)
    : name(n), level(l), health(h), max_health(mh), mana(m), max_mana(mm), health_up(hu), mana_up(mu), weapon(w), spell(s) {
    std::cout << "The character parameters are set" << std::endl;
}

void Character::set_dataC(int l, int h, int mh, int m, int mm, int hu, int mu) {
    level = l;
    health = h;
    mana = m;
    max_health = mh;
    max_mana = mm;
    health_up = hu;
    mana_up = mu;
}

void Character::use_spell(){
    if (mana > 0) 
    {
        std::cout<<"Spell is used" << std::endl;
        mana--;
    }
    else
    {
    std::cout << "Enough mana" << std::endl;
    }    
}

void Character::taking_damage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0; // Защита от отрицательного значения здоровья
    }
}

bool Character::is_alive() const {
    return health > 0;
}

void Character::set_dataW(const std::string& weaponName, int weaponDamage) {
    weapon.setType(weaponName);
    weapon.setDamage(weaponDamage);
}

void Character::set_dataS(const std::string& spellName, int spellDamage) {
    spell.setType(spellName);
    spell.setDamage(spellDamage);
}

void Character::lvl_up() {
    level++;
    max_health += health_up;
    max_mana += mana_up;
    
    health = max_health;
    mana = max_mana;

    std::cout << "Level up! Current level: " << level << std::endl;
    std::cout << "Max HP: " << max_health << ", Max mana: " << max_mana << std::endl;
}

void Character::get_full_info() const {
    std::cout << getInfC() << std::endl;
    std::cout << getInfW() << std::endl;
    std::cout << getInfS() << std::endl;
    std::cout << std::endl;
}

std::string Character::getInfC() const {
    return "Character name: " + name + "; Level: " + std::to_string(level) + "; Health: " + std::to_string(health) 
    + "/" + std::to_string(max_health) + "; Mana: " + std::to_string(mana)
    + "/" + std::to_string(max_mana) + "; Health up: " + std::to_string(health_up) + "; Mana up: " + std::to_string(mana_up);
}

std::string Character::getInfW() const {
    return "Weapon name: " + weapon.getType() + "; Damage: " + std::to_string(weapon.getDamage());
}

std::string Character::getHP() const {
    return "Character name: " + name + "; Health: " + std::to_string(health)+ "/" + std::to_string(max_health);
}

std::string Character::getInfS() const {
    return "Spell name: " + spell.getType() + "; Spell damage: " + std::to_string(spell.getDamage());
}


Character::~Character() {
    std::cout << "Character destroyed" << std::endl;
}



