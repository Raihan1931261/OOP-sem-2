#include "BattleGame.h"
#include <utility>

// --- define static members ---
int BattleGame::totalGamesPlayed = 0;
int BattleGame::totalDamageDealt = 0;
int BattleGame::player1Wins      = 0;
int BattleGame::player2Wins      = 0;

// --- ctor ---
BattleGame::BattleGame(std::string p1Name, std::string p2Name)
    : player1(std::move(p1Name)),
      player2(std::move(p2Name)),
      currentState(GameState::PLAYING) {}

int BattleGame::calculateDamage(ActionType action) {
    switch (action) {
        case ActionType::LIGHTATTACK: return 15;
        case ActionType::HEAVYATTACK: return 30;
        case ActionType::BLOCK:       default: return 0;
    }
}

void BattleGame::resolveAttacks(ActionType p1Move, ActionType p2Move) {
    // set blocking flags first
    player1.setBlocking(p1Move == ActionType::BLOCK);
    player2.setBlocking(p2Move == ActionType::BLOCK);

    int d1 = calculateDamage(p1Move);
    int d2 = calculateDamage(p2Move);

    if (d1 > 0) { player2.takeDamage(d1); totalDamageDealt += d1; }
    if (d2 > 0) { player1.takeDamage(d2); totalDamageDealt += d2; }
}

void BattleGame::updateGameState() {
    const bool p1Alive = player1.isAlive();
    const bool p2Alive = player2.isAlive();

    if (!p1Alive && !p2Alive) {
        currentState = GameState::DRAW;
        ++totalGamesPlayed;
    } else if (!p2Alive) {
        currentState = GameState::PLAYER1_WON;
        ++player1Wins;
        ++totalGamesPlayed;
    } else if (!p1Alive) {
        currentState = GameState::PLAYER2_WON;
        ++player2Wins;
        ++totalGamesPlayed;
    } else {
        currentState = GameState::PLAYING;
    }
}

void BattleGame::executeTurn(ActionType p1Move, ActionType p2Move) {
    resolveAttacks(p1Move, p2Move);
    updateGameState();
}

void BattleGame::displayStatus() const {
    std::cout << "\n=== Battle Status ===\n";
    std::cout << player1.getName() << " HP: " << player1.getHealth() << "\n";
    std::cout << player2.getName() << " HP: " << player2.getHealth() << "\n";
    std::cout << "=====================\n\n";
}

GameState BattleGame::getGameState() const { return currentState; }

void BattleGame::displayStatistics() {
    std::cout << "\n=== Game Statistics ===\n";
    std::cout << "Total Games Played: " << totalGamesPlayed << "\n";
    std::cout << "Total Damage Dealt: " << totalDamageDealt << "\n";
    std::cout << "Player 1 Wins: "      << player1Wins      << "\n";
    std::cout << "Player 2 Wins: "      << player2Wins      << "\n";
    std::cout << "=======================\n\n";
}

int BattleGame::getTotalGamesPlayed() { return totalGamesPlayed; }
