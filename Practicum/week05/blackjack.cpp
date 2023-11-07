#include <iostream>

#include <cstdlib>
#include <ctime>

int randBetween(int min, int max) { return min + rand() % (max - min + 1); }

int drawCard() {
    int card = randBetween(1, 13);
    return (card > 10) ? 10 : card;
}

bool shouldComputerContinue(int currentPoints) { return currentPoints < 18; }

void playGame() {
    int firstCard = drawCard();
    int secondCard = drawCard();

    std::cout << "Your first card is " << firstCard << "." << std::endl;
    std::cout << "Your second card is " << secondCard << "." << std::endl;

    int playerPoints = firstCard + secondCard;
    int computerPoints = drawCard() + drawCard();

    bool playerStillPlaying = true;
    bool computerStillPlaying = true;

    while (playerStillPlaying || computerStillPlaying) {
        if (playerStillPlaying) {
            std::cout << std::endl;
            std::cout << "You have " << playerPoints << " points." << std::endl;
            std::cout << "Hit or Stand? (h/s) ";

            char input;
            std::cin >> input;

            if (input == 'H' || input == 'h') {
                int card = drawCard();

                std::cout << "You drew " << card << "." << std::endl;

                playerPoints += card;

                if (playerPoints > 21) {
                    std::cout << std::endl;
                    std::cout << "You broke 21 points. You lose!" << std::endl;

                    return;
                }
            } else {
                playerStillPlaying = false;
            }
        }

        if (computerStillPlaying) {
            std::cout << std::endl;

            if (shouldComputerContinue(computerPoints)) {
                std::cout << "Dealer: I'll take another card." << std::endl;

                computerPoints += drawCard();
            } else {
                std::cout << "Dealer: I'll play with this hand." << std::endl;

                computerStillPlaying = false;
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Dealer: I have " << computerPoints << " points. ";

    if (computerPoints > 21) {
        std::cout << "I broke 21, so you win!" << std::endl;
        return;
    }

    std::cout << "You have " << playerPoints << ". ";

    if (computerPoints > playerPoints) {
        std::cout << "You lose." << std::endl;
    } else if (computerPoints < playerPoints) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }
}

bool promptForAnotherGame() {
    std::cout << "Play again? (y/n) ";

    char input;
    std::cin >> input;

    std::cout << std::endl;

    return input == 'y' || input == 'Y';
}

int main() {
    srand(time(0));

    do {
        playGame();
    } while (promptForAnotherGame());

    return 0;
}
