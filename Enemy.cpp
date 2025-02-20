/*
    Andrew Sergienko st135882@student.spbu.ru
*/
#include "Enemy.h"

Enemy::Enemy(const std::string &n, int ed, int eh)
    : Ename(n), enemy_damage(ed), enemy_hp(eh) {
    std::cout << "The enemy parameters are set" << std::endl;
}

void Enemy::set_dataE(int ed, int eh) {
    enemy_damage= ed; enemy_hp = eh;
}

void Enemy::E_taking_damage(){
    enemy_hp--;
}
void Enemy::get_infE() const {
    std::cout << "Enemy: " << Ename << "; Enemy damage: " << enemy_damage  << "; Enemy health: " << enemy_hp << std::endl;
}

Enemy::~Enemy()
{
}
