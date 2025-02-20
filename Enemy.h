#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>

class Enemy {
protected:
    std::string Ename;
private:
    unsigned int enemy_damage;
    unsigned int enemy_hp;
public:
    Enemy(const std::string &n, int ed, int eh);
    void set_dataE(int ed, int eh);
    void get_infE() const;
    void E_attack();
    void E_taking_damage();
    unsigned int getEDamage() const;
    unsigned int getEHp() const;
    
    virtual ~Enemy();
};

#endif
