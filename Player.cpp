#include "Player.h"
#include <utility>

Player::Player(std::string name)
    : name(std::move(name)), health(100), isBlocking(false) {}

void Player::takeDamage(int damage) {
    if (isBlocking) {
        damage /= 2;        // reduce by 50%
        isBlocking = false; // block only lasts one attack
    }
    health -= damage;
    if (health < 0) health = 0;
}

void Player::setBlocking(bool blocking) { isBlocking = blocking; }
bool  Player::getIsBlocking() const     { return isBlocking; }
int   Player::getHealth() const         { return health; }
std::string Player::getName() const     { return name; }
bool  Player::isAlive() const           { return health > 0; }
