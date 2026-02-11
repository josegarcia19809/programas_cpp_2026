//
// Created by Jose Garcia on 11/02/26.
//

#include <iostream>
#include <random>

using namespace std;

int rollDice();

int main() {
    // Enumeración fuertemente tipada (sí existe en C++11)
    enum class Status { keepRolling, won, lost };

    int myPoint = 0;
    Status gameStatus = Status::keepRolling;

    // 🔹 C++11 no permite declarar variable dentro del switch
    int sumOfDice = rollDice();

    switch (sumOfDice) {
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
            cout << "Point is " << myPoint << endl;
            break;
    }

    while (gameStatus == Status::keepRolling) {
        sumOfDice = rollDice();

        if (sumOfDice == myPoint) {
            gameStatus = Status::won;
        } else if (sumOfDice == 7) {
            gameStatus = Status::lost;
        }
    }

    // Mostrar resultado final
    if (gameStatus == Status::won) {
        cout << "Player wins!" << endl;
    } else {
        cout << "Player loses!" << endl;
    }

    return 0;
}

int rollDice() {
    static random_device rd;
    static default_random_engine eng(rd());
    static uniform_int_distribution<int> randomDie(1, 6);

    const int die1 = randomDie(eng);
    const int die2 = randomDie(eng);
    const int sum = die1 + die2;

    cout << "Player rolled "
            << die1 << " + "
            << die2 << " = "
            << sum << endl;

    return sum;
}
