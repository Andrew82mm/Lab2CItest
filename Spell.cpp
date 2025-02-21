#include "Spell.h"
#include "Character.h"

Spell::Spell(const std::string& type, int damage) : type(type), damage(damage) {}

std::string Spell::getType() const {
    return type;
}

int Spell::getDamage() const {
    return damage;
}

void Spell::setType(const std::string& newType) {
    type = newType;
}

void Spell::setDamage(int newDamage) {
    damage = newDamage;
}

Spell::~Spell() {}
