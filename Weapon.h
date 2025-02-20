#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:
    std::string type;
    int damage;
public:
    Weapon(const std::string& type, int damage);
    std::string getType() const;
    int getDamage() const;
    void setType(const std::string& newType);
    void setDamage(int newDamage);
    ~Weapon();
};

#endif
