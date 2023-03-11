#include <iostream>
#include <cstring>

using namespace std;

void task1() {
    cout << "Task #1: Get input and display second character of each word\n";
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter a sentence: ";
    cin.getline(str, MAX_SIZE);

    cout << "The second character of each word is:\n";
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            cout << str[i + 1] << " ";
        }
    }
    cout << endl << endl;
}

void task2() {
    cout << "Task #2: Determine last element of string and swap two elements\n";
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter a word: ";
    cin.getline(str, MAX_SIZE);

    int len = strlen(str);
    cout << "The last element of the string is: " << str[len - 1] << endl;

    if (len >= 2) {
        char temp = str[len - 2];
        str[len - 2] = str[len - 1];
        str[len - 1] = temp;
        cout << "After swapping, the string is: " << str << endl << endl;
    }
    else {
        cout << "Cannot swap, string has less than two elements\n\n";
    }
}

void task3() {
    cout << "Task #3: Remove a character from a string\n";
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter a word: ";
    cin.getline(str, MAX_SIZE);

    char removeChar;
    cout << "Enter the character to remove: ";
    cin >> removeChar;

    int len = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != removeChar) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    cout << "After removing " << removeChar << ", the string is: " << str << endl << endl;
}

int main() {
    task1();
    task2();
    task3();
    return 0;
}
