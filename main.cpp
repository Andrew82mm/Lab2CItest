#include <iostream>
#include "Character.h"
#include "Weapon.h"
#include "Spell.h"
#include "Enemy.h"

int main() {
    // Создание оружия
    std::unique_ptr<Weapon> sword = std::make_unique<Weapon>("Sword", 12);
    std::unique_ptr<Spell> fire = std::make_unique<Spell>("Fire", 1, 1);
    
    // Создание персонажа
    Character character("Aragorn", 1, 1, 1, 0, 2, 4, 0, std::move(sword),std::move(fire));
    Enemy enemy("Frog", 5, 5);

    // Вывод полной информации о персонаже
    character.get_full_info();
    character.taking_damage();
    character.get_full_info();
    character.lvl_up();
    character.get_full_info();
    character.use_spell();
    character.get_full_info();
    character.taking_damage();
    character.get_full_info();
    std::cout << std::endl;
    enemy.get_infE();
    enemy.E_taking_damage();
    enemy.get_infE();

    /*do 
    {
        character.taking_damage();
    }
    while (health>0);
    
    return 0;*/
}

