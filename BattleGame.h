#ifndef BATTLEGAME_H
#define BATTLEGAME_H

#include "Player.h"
#include <iostream>

// Unscoped so tests can use LIGHTATTACK / PLAYING directly
enum ActionType { LIGHTATTACK, HEAVYATTACK, BLOCK };
enum GameState  { PLAYING, PLAYER1_WON, PLAYER2_WON, DRAW };

class BattleGame {
private:
    Player    player1;
    Player    player2;
    GameState currentState;

    // shared across ALL BattleGame instances
    static int totalGamesPlayed;
    static int totalDamageDealt;
    static int player1Wins;
    static int player2Wins;

    // helpers
    int  calculateDamage(ActionType action);
    void resolveAttacks(ActionType p1Move, ActionType p2Move);
    void updateGameState();

public:
    BattleGame(std::string p1Name, std::string p2Name);

    void executeTurn(ActionType p1Move, ActionType p2Move);
    void displayStatus() const;
    GameState getGameState() const;

    static void displayStatistics();
    static int  getTotalGamesPlayed();
};

#endif
