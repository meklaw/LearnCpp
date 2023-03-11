#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

int isPerfectSquare(int n, int* result) {
    *result = isPerfectSquare(n);
    return *result;
}

int isPerfectSquare(int n, bool& result) {
    result = isPerfectSquare(n);
    return result;
}

int main() {
    int num1, num2, num3;
    int result1, result2;
    bool result3;

    cout << "Enter three natural numbers: ";
    cin >> num1 >> num2 >> num3;

    result1 = isPerfectSquare(num1);
    result2 = isPerfectSquare(num2, &result2);
    result3 = isPerfectSquare(num3, result3);

    int count = result1 + result2 + result3;

    cout << count << " of the entered numbers are perfect squares of other natural numbers." << endl;

    return 0;
}
