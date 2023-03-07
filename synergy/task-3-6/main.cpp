#include <iostream>
using namespace std;

void printMultiplicationTable(int n) {
  for (int i = 1; i <= 10; i++) {
    cout << n << " x " << i << " = " << n * i << endl;
  }
}

void guessNumber(int target) {
  int number;
  while (true) {
    cout << "Enter a number (or " << target << " to exit): ";
    cin >> number;
    if (number == target) {
      cout << "Exiting..." << endl;
      break;
    } else {
      cout << ((number > target) ? "more" : "less") << " than " << target << endl;
      cout << ((number > 10) ? "more" : "less") << " than 10" << endl;
      cout << ((number % 2 == 0) ? "is" : "is not") << " divisible by 2" << endl;
      cout << ((number % 3 == 0) ? "is" : "is not") << " divisible by 3" << endl;
    }
  }
}

int main() {
  printMultiplicationTable(5);
  guessNumber(7);
  return 0;
}
