#include "GameInterface.h"

int main() {
    std::string p1Name = "Player 1";
    std::string p2Name = "Player 2";

    GameInterface::displayWelcome();

    // Outer loop: allow multiple games
    while (true) {
        BattleGame game(p1Name, p2Name);

        // Inner loop: keep taking turns while game is PLAYING
        while (game.getGameState() == PLAYING) {
            ActionType p1Move = GameInterface::getPlayerAction(p1Name);
            ActionType p2Move = GameInterface::getPlayerAction(p2Name);

            game.executeTurn(p1Move, p2Move);
            GameInterface::displayTurnResult(p1Name, p1Move, p2Name, p2Move);
            game.displayStatus();
        }

        GameInterface::displayWinner(game.getGameState(), p1Name, p2Name);
        BattleGame::displayStatistics(); // static: no instance needed

        if (!GameInterface::askPlayAgain()) break;
    }

    std::cout << "\nThanks for playing!\n";
    return 0;
}
