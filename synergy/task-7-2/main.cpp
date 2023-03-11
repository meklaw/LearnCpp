#include <iostream>

using namespace std;

void fillAndDisplayArray(int arr[], int size) {
    cout << "The array values are: ";
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

int main() {
    const int ARRAY_SIZE_1 = 5;
    const int ARRAY_SIZE_2 = 7;
    int arr1[ARRAY_SIZE_1];
    int arr2[ARRAY_SIZE_2];

    cout << "Array 1:" << endl;
    fillAndDisplayArray(arr1, ARRAY_SIZE_1);

    cout << "Array 2:" << endl;
    fillAndDisplayArray(arr2, ARRAY_SIZE_2);

    return 0;
}
