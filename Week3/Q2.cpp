#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int &comparisons, int &swaps) {
    comparisons = 0;
    swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++; // Count comparisons
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) { // Swap only when necessary
            swap(arr[i], arr[minIndex]);
            swaps++; // Count swaps
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T; // Read number of test cases

    while (T--) {
        int n;
        cin >> n; // Read array size
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read array elements
        }

        int comparisons = 0, swaps = 0;
        selectionSort(arr, n, comparisons, swaps);

        printArray(arr, n); // Print sorted array
        cout << comparisons << endl; // Print total comparisons
        cout << swaps << endl; // Print total swaps
    }

    return 0;
}
