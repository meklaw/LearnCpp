#include <iostream>
using namespace std;

int main() {
    int n, num;
    int sum = 0;
    int min, max;
    float mean;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integer elements: ";
    cin >> num;

    min = num;
    max = num;
    sum += num;

    for (int i = 2; i <= n; i++) {
        cin >> num;
        sum += num;

        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
    }

    mean = (float) sum / n;

    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;
    cout << "Sum of elements: " << sum << endl;
    cout << "Arithmetic mean: " << mean << endl;

    return 0;
}
