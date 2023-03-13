#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string lastNames[] = {"Johnson", "Smith", "Brown", "Davis", "Garcia", "Wilson", "Taylor", "Clark"};
    int size = sizeof(lastNames) / sizeof(lastNames[0]);

    std::sort(lastNames, lastNames + size, [](std::string a, std::string b) {
        return a[0] < b[0];
    });

    std::cout << "Sorted last names: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << lastNames[i] << std::endl;
    }

    return 0;
}
