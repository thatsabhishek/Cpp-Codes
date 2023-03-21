#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int main() {
    int n, i;
    cout<<"Enter the number of elements:";
    cin>>n;
    
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"enter number: ";
        cin>>arr[i];
    }
    cout<<endl;

    //Displays the unsorted array
    cout<<"Unsorted Array: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

    mergeSort(arr, 0, n - 1);
    
    //Displays the Sorted Array
    cout<<"Sorted Array: ";
    for(i=0; i<n; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    
    return 0;
}
