//
// Created by Jose Garcia on 11/02/26.
//

#include <iostream>
#include <random>
using namespace std;

int rollDice();

int main() {
    // scoped enumeration with constants that represent the game status
    enum class Status { keepRolling, won, lost };

    int myPoint{0}; // point if no win or loss on first roll
    Status gameStatus = Status::keepRolling;

    // determine game status and point (if needed) based on first roll
    switch (const int sumOfDice = rollDice()) {
        case 7:
        case 11:
            gameStatus = Status::won;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Status::lost;
            break;
        default:
            myPoint = sumOfDice;
            cout << "Point is " << myPoint << '\n';
            break;
    }

    while (gameStatus == Status::keepRolling) {
        const int sumOfDice{rollDice()};
        if (sumOfDice == myPoint) {
            gameStatus = Status::won;
        } else if (sumOfDice == 7) {
            gameStatus = Status::lost;
        }
    }
    if (gameStatus == Status::won) {
        cout << "Player wins! 🎉\n";
    } else {
        cout << "Player loses! 💀\n";
    }
}

int rollDice() {
    static random_device rd;
    static default_random_engine eng(rd());
    static uniform_int_distribution<int> randomDie(1, 6);

    const int die1{randomDie(eng)};
    const int die2{randomDie(eng)};
    const int sum{die1 + die2};
    cout << "Player rolled "
            << die1 << " + "
            << die2 << " = "
            << sum << '\n';
    return sum;
}
