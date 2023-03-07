#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void createArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {
    const int SIZE = 7;
    int arr1[SIZE] = {4, 2, 6, 8, 3, 9, 1};
    cout << "Array 1: ";
    printArray(arr1, SIZE);

    int size2;
    cout << "Enter the size of array 2: ";
    cin >> size2;

    int arr2[size2];
    createArray(arr2, size2);

    cout << "Array 2: ";
    printArray(arr2, size2);

    return 0;
}
