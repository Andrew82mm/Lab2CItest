#include <iostream>
#include "Character.h"
#include "Weapon.h"
#include "Spell.h"

int main() {
    // Создание оружия
    Weapon sword ("Sword", 12);
    Spell fire ("Fire", 5);
    Weapon bigsword ("Sword", 15);
    Spell punch ("Punch", 5);
    
    // Создание персонажа
    Character player("Aragorn", 1, 20, 20, 6, 2, 4, 0, sword, fire);
    Character enemy("Orc", 1, 15, 15, 6, 2, 4, 0, bigsword, punch);

    while (player.is_alive() && enemy.is_alive()) {
        int player_choice;
        std::cout << "Choose an action: 1 - Attack, 2 - Use Spell" << std::endl;
        std::cin >> player_choice;
        std::cout << std::endl;
        
        if (player_choice == 1) {
            std::cout << "You attack the enemy with your weapon!" << std::endl;
            enemy.taking_damage(sword.getDamage());
            std::cout << enemy.getHP()<< std::endl;
        } else if (player_choice == 2) {
            // Использование заклинания
            std::cout << "You cast a spell on the enemy!" << std::endl;
            player.use_spell();
            enemy.taking_damage(fire.getDamage());
            std::cout << enemy.getHP() << std::endl;
        } else {
            std::cout << "Invalid choice!" << std::endl;
        }
        
        if (!enemy.is_alive()) {
            std::cout << "You defeated the enemy!" << std::endl;
            break;
        }
        
        std::cout << "Enemy's turn!" << std::endl;
        int enemy_choice = rand() % 2 + 1;
        if (enemy_choice == 1) {
            std::cout << "Enemy attacks you with its weapon!" << std::endl;
            player.taking_damage(bigsword.getDamage());
            std::cout << player.getHP()<< std::endl;
        } else if (enemy_choice == 2) {
            std::cout << "Enemy casts a spell!" << std::endl;
            enemy.use_spell();
            player.taking_damage(punch.getDamage());
            std::cout << player.getHP()<< std::endl;
        }
        
        /*if (!enemy.is_alive()) {
            std::cout << "You defeated the enemy!" << std::endl;
            break;
        }*/
        if (!player.is_alive()) {
            std::cout << "You have been defeated!" << std::endl;
            break;
        }
    }
    

    
    return 0;
}
