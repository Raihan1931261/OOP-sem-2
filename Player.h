#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;   // Name of the player
    int health;         // Current HP (starts at 100)
    bool isBlocking;    // Whether player is blocking this turn

public:
    explicit Player(std::string name);

    void takeDamage(int damage);

    // Setters / Getters
    void setBlocking(bool blocking);
    bool getIsBlocking() const;
    int getHealth() const;
    std::string getName() const;
    bool isAlive() const;
};

#endif
