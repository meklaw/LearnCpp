#include <iostream>
#include <cstring>

using namespace std;

void task1() {
    cout << "Task #1: Delete the first letter of a string\n";
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter a word: ";
    cin.getline(str, MAX_SIZE);

    int len = strlen(str);
    for (int i = 1; i < len; i++) {
        str[i - 1] = str[i];
    }
    str[len - 1] = '\0';

    cout << "After deleting the first letter, the string is: " << str << endl << endl;
}

void task2() {
    cout << "Task #2: Create a mirror image of a string\n";
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter a word: ";
    cin.getline(str, MAX_SIZE);

    int len = strlen(str);
    char mirror[MAX_SIZE];
    for (int i = 0; i < len; i++) {
        mirror[i] = str[len - i - 1];
    }
    mirror[len] = '\0';

    cout << "The mirror image of the string is: " << mirror << endl << endl;
}

int main() {
    task1();
    task2();
    return 0;
}
