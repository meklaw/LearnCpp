#include <iostream>

using namespace std;

int main() {
    int first;
    int second;

    cout << "Enter the first number: " << endl;
    cin >> first;
    cout << "Enter the second number: " << endl;
    cin >> second;

    if (first > second) {
        cout << "more" << endl;
        return 0;
    }

    if (first < second) {
        cout << "less" << endl;
        return 0;
    }

    cout << "equal" << endl;

    return 0;
}
