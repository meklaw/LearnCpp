#include <iostream>

using namespace std;

int main() {
    int day, month, year;
    cout << "Enter your date of birth (day month year): ";
    cin >> day >> month >> year;

    bool isLeapYear = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = true;
            }
        } else {
            isLeapYear = true;
        }
    }
    cout << "Leap year: " << (isLeapYear ? "Yes" : "No") << endl;

    string animals[] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep"};
    int animalIndex = (year - 4) % 12;
    cout << "Eastern calendar year: " << animals[animalIndex] << endl;

    string signs[] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};
    int signIndex = month - (day < 21 ? 2 : 1);
    if (signIndex < 0) {
        signIndex += 12;
    }
    cout << "Zodiac sign: " << signs[signIndex] << endl;

    return 0;
}
