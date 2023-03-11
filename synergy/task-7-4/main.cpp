#include <iostream>
#include <string>

using namespace std;

string replaceFirstAndLast(string str, char ch) {
    if (str.length() < 2) {
        return str;
    }
    str[0] = ch;
    str[str.length() - 1] = ch;
    return str;
}

string trim(string str) {
    if (str.empty()) {
        return str;
    }
    int start = 0, end = str.length() - 1;
    while (start < str.length() && isspace(str[start])) {
        start++;
    }
    while (end >= 0 && isspace(str[end])) {
        end--;
    }
    return str.substr(start, end - start + 1);
}

int main() {
    string str1, str2;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter a character: ";
    cin >> ch;

    str2 = replaceFirstAndLast(str1, ch);

    cout << "Original string: " << str1 << endl;
    cout << "Modified string: " << str2 << endl;

    str2 = trim(str1);

    cout << "Original string: " << str1 << endl;
    cout << "Trimmed string: " << str2 << endl;

    return 0;
}
