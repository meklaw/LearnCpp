#include <iostream>

using namespace std;

int main() {
    long long int login1 = 123;
    long long int password1 = 456;
    long long int login2 = 987;
    long long int password2 = 123;

    long long int login, password;
    cout << "Enter your login: " << endl;
    cin >> login;
    cout << "Enter your password: " << endl;
    cin >> password;

    if ((login == login1 && password == password1) || (login == login2 && password == password2)) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Incorrect login or password." << endl;
    }

    return 0;
}
