#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void sortArray(int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}

void swapColumns(int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i][0];
        arr[i][0] = arr[i][m - 1];
        arr[i][m - 1] = temp;
    }
}

int main() {
    int n, m;

    cout << "Enter the number of rows (N): ";
    cin >> n;

    cout << "Enter the number of columns (M): ";
    cin >> m;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 10 - 2; // range: -2 to 7
        }
    }

    cout << "Original array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    sortArray(arr, n, m);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    swapColumns(arr, n, m);

    cout << "Array with swapped columns:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
