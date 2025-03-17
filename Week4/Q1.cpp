#include <iostream>
using namespace std;

int comparisons = 0, inversions = 0;

void mergesorted(int arr[], int n, int a[], int n1, int b[], int n2) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        comparisons++; // Count each comparison
        if (a[i] <= b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
            inversions += (n1 - i); // All remaining elements in `a` are greater, so count inversions
        }
    }
    while (i < n1) arr[k++] = a[i++];
    while (j < n2) arr[k++] = b[j++];
}

void mergeSort(int arr[], int n) {
    if (n == 1) return;
    
    int n1 = n / 2;
    int n2 = n - n1;
    int a[n1], b[n2];

    for (int i = 0; i < n1; i++) a[i] = arr[i];
    for (int i = 0; i < n2; i++) b[i] = arr[i + n1];

    mergeSort(a, n1);
    mergeSort(b, n2);
    mergesorted(arr, n, a, n1, b, n2);
}

int main() {
    int T, n;
    cin >> T; // Number of test cases
    while (T--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        comparisons = 0;
        inversions = 0;
        mergeSort(arr, n);

        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << "\nComparisons: " << comparisons << ", Inversions: " << inversions << endl;
    }
    return 0;
}
