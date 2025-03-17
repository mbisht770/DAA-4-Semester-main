#include <iostream>
#include <cstdlib>  // For rand() function
#include <ctime>    // For seeding random number generator
using namespace std;

int comparisons = 0, swaps = 0;

int partition(int arr[], int si, int ei) {
    // Select a random pivot and swap it with the first element
    int randomIndex = si + rand() % (ei - si + 1);
    swap(arr[si], arr[randomIndex]);
    swaps++;

    int pivot = arr[si];
    int count = 0;

    // Count elements smaller than or equal to pivot
    for (int i = si + 1; i <= ei; i++) {
        comparisons++;
        if (arr[i] <= pivot) count++;
    }

    // Place pivot at its correct position
    int pivotIndex = si + count;
    swap(arr[pivotIndex], arr[si]);
    swaps++;

    // Rearranging elements to partition correctly
    int i = si, j = ei;
    while (i < pivotIndex && j > pivotIndex) {
        comparisons++;
        while (arr[i] <= pivot) {
            i++;
            comparisons++;
        }
        comparisons++;
        while (arr[j] > pivot) {
            j--;
            comparisons++;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            swaps++;
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int si, int ei) {
    if (si >= ei) return;
    int pi = partition(arr, si, ei);
    quickSort(arr, si, pi - 1);
    quickSort(arr, pi + 1, ei);
}

int main() {
    srand(time(0)); // Seed for random pivot selection

    int arr[] = {4, 2, 4, 1, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nComparisons: " << comparisons;
    cout << "\nSwaps: " << swaps << endl;

    return 0;
}
