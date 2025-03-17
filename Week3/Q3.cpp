#include <iostream>
#include <algorithm> // For sorting
using namespace std;

bool hasDuplicates(int arr[], int n) {
    sort(arr, arr + n); // Sorting the array
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            return true;
    }
    return false;
}

// Driver function
int main() {
    int arr[] = {1, 2, 3, 4, 5, 2}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << (hasDuplicates(arr, n) ? "YES" : "NO") << endl;

    return 0;
}
