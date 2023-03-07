#include <iostream>
using namespace std;

void printHello() {
    for (int i = 0; i < 9; i++) {
        cout << "Hello" << endl;
    }
}

void printNumbers() {
    for (int i = 0; i < 15; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void printOddNumbers() {
    for (int i = 0; i < 15; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void printSum() {
    int sum = 0;
    for (int i = 5; i <= 15; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
}

int main() {
    printHello();
    printNumbers();
    printOddNumbers();
    printSum();
    return 0;
}
