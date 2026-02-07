//
// Created by Jose Garcia on 07/02/26.
//

#include <iostream>
#include <string>
using namespace std;

void printNumber(int num) {
    cout << num << endl;
}

void printNumber(int FirstNum, int SecondNum) {
    cout << FirstNum << " " << SecondNum << endl;
}

void printNumber(double num) {
    cout <<"Double "<< num << endl;
}

void printNumber(string num) {
    cout <<"String "<< num << endl;
}

int main() {
    printNumber(10);
    printNumber(20.0);
    printNumber(30, 50);
    printNumber("40");
}