#ifndef SPELL_H
#define SPELL_H

#include <string>

class Spell {
private:
    std::string type;
    int manacost;
    int damage;
public:
    Spell(const std::string& type, int manacost, int damage);
    std::string getType() const;
    int getDamage() const;
    void setType(const std::string& newType);
    void setDamage(int newDamage);
    ~Spell();
};

#endif
