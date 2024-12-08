#include "BullsAndCowsGame.h"
#include <cstdlib>
#include <ctime>

BullsAndCowsGame::BullsAndCowsGame(int attempts) : maxAttempts(attempts) {
    secretNumber = generateSecretNumber();
}

std::string BullsAndCowsGame::generateSecretNumber() {
    std::srand(std::time(nullptr));
    std::set<int> uniqueDigits;
    while (uniqueDigits.size() < 4) {
        uniqueDigits.insert(std::rand() % 10);
    }

    std::string number;
    for (int digit : uniqueDigits) {
        number += std::to_string(digit);
    }
    return number;
}

bool BullsAndCowsGame::isValidGuess(const std::string& guess) {
    if (guess.length() != 4) return false;

    std::set<char> uniqueDigits(guess.begin(), guess.end());
    return uniqueDigits.size() == 4;
}

std::pair<int, int> BullsAndCowsGame::checkGuess(const std::string& guess) {
    int bulls = 0, cows = 0;
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == secretNumber[i]) {
            bulls++;
        } else if (secretNumber.find(guess[i]) != std::string::npos) {
            cows++;
        }
    }
    return {bulls, cows};
}

void BullsAndCowsGame::play() {
    // Реализация метода play
}