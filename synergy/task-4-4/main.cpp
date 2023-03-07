#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    int min = arr[0], max = arr[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    float avg = (float)sum / n;

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    cout << "Sum of all elements: " << sum << endl;
    cout << "Average value: " << avg << endl;

    return 0;
}
