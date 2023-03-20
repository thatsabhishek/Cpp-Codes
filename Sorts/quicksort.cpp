#include <iostream>
using namespace std;

int quick(int arr[], int lb, int ub) {
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end) {
        while (arr[start] <= pivot && start < ub) {
            start += 1;
        }
        while (arr[end] > pivot) {
            end -= 1;
        }
        if (start < end) {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

void quicksort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int part = quick(arr, lb, ub);
        quicksort(arr, lb, part-1);
        quicksort(arr, part+1, ub);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int a;
        cout << "Enter element: ";
        cin >> a;
        arr[i] = a;
    }
    cout << endl;
    cout << "Unsorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    quicksort(arr, 0, n-1);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}