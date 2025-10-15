#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;   // player name
    int health;         // starts at 100
    bool isBlocking;    // true only for the next incoming hit

public:
    explicit Player(std::string name);

    void takeDamage(int damage);
    void setBlocking(bool blocking);

    bool getIsBlocking() const;
    int getHealth() const;
    std::string getName() const;
    bool isAlive() const;
};

#endif
