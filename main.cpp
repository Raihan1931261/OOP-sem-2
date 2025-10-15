#include "GameInterface.h"

int main() {
    std::string p1Name = "Player 1";
    std::string p2Name = "Player 2";

    GameInterface::displayWelcome();

    // allow multiple full games
    while (true) {
        BattleGame game(p1Name, p2Name);

        // turns keep running while game is PLAYING
        while (game.getGameState() == GameState::PLAYING) {
            ActionType p1Move = GameInterface::getPlayerAction(p1Name);
            ActionType p2Move = GameInterface::getPlayerAction(p2Name);

            game.executeTurn(p1Move, p2Move);
            GameInterface::displayTurnResult(p1Name, p1Move, p2Name, p2Move);
            game.displayStatus();
        }

        GameInterface::displayWinner(game.getGameState(), p1Name, p2Name);
        BattleGame::displayStatistics(); // static

        if (!GameInterface::askPlayAgain()) break;
    }

    std::cout << "\nThanks for playing!" << std::endl;
    return 0;
}
