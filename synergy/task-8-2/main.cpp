#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

// Task 1: Divide function
float divide(int num) {
    if (num == 0) {
        throw invalid_argument("Divide by zero error!");
    }
    return 1024.0 / num;
}

// Task 2: File read function
string readFromFile(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw runtime_error("File not opened!");
    }
    string data;
    getline(file, data);
    return data;
}

// Task 3: Math parser function
float parseMath(string input) {
    int num1, num2;
    char op;
    if (sscanf(input.c_str(), "%d%c%d", &num1, &op, &num2) != 3) {
        throw invalid_argument("Invalid input format!");
    }
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                throw invalid_argument("Divide by zero error!");
            }
            return (float)num1 / num2;
        default:
            throw invalid_argument("Invalid operation!");
    }
}

int main() {
    try {
        // Task 1 example
        int num = 0;
        cout << "Enter a number to divide 1024 by: ";
        cin >> num;
        cout << "Result: " << divide(num) << endl;

        // Task 2 example
        string filename = R"(C:\Niki\CLionProjects\LearnCpp\synergy\task-8-2\example.txt)";
        cout << "Reading data from file " << filename << endl;
        string data = readFromFile(filename);
        cout << "Data: " << data << endl;

        // Task 3 example
        string mathInput;
        cout << "Enter a math expression (e.g. 1+2, 4-5, 8*9, 10/2): ";
        cin >> mathInput;
        float result = parseMath(mathInput);
        cout << "Result: " << result << endl;
    }
    catch (invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}
