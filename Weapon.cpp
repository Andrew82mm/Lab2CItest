#include "Weapon.h"

Weapon::Weapon(const std::string& type, int damage) : type(type), damage(damage) {}

std::string Weapon::getType() const {
    return type;
}

int Weapon::getDamage() const {
    return damage;
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}

void Weapon::setDamage(int newDamage) {
    damage = newDamage;
}

Weapon::~Weapon() {}
