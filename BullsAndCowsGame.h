#ifndef BULLSANDCOWSGAME_H
#define BULLSANDCOWSGAME_H

#include <iostream>
#include <string>
#include <set>

class BullsAndCowsGame {
private:
    std::string secretNumber;
    int maxAttempts;

    std::string generateSecretNumber();

public:
    BullsAndCowsGame(int attempts = 10);
    void play();
    bool isValidGuess(const std::string& guess);
    std::pair<int, int> checkGuess(const std::string& guess);
    int getMaxAttempts() const { return maxAttempts; }
    std::string getSecretNumber() const { return secretNumber; }
};

#endif // BULLSANDCOWSGAME_H