#include <iostream>
using namespace std;

class GameCharacter {
private:
    string name;
    int health;
    int maxHealth;

public:

    // Parameterized Constructor
    GameCharacter(string n, int maxH) {
        if(n != "")
            name = n;

        if(maxH > 0) {
            maxHealth = maxH;
            health = maxH;   // start with full health
        }
    }

    // Getters
    string getName() {
        return name;
    }

    int getHealth() {
        return health;
    }

    // Setter with validation (damage)
    void takeDamage(int damage) {

        if(damage <= 0)
            return;

        health = health - damage;

        if(health <= 0) {
            health = 0;
            cout << "Character has fainted." << endl;
        }
    }

    // Setter with validation (heal)
    void heal(int amount) {

        if(amount <= 0)
            return;

        health = health + amount;

        if(health > maxHealth)
            health = maxHealth;
    }
};

int main() {

    GameCharacter hero("Arthur", 100);

    hero.takeDamage(120);
    hero.heal(50);

    cout << "Final Health: " << hero.getHealth() << endl;

    return 0;
}