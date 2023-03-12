#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    int i, j, temp;
    for(i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while (temp < arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
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

    insertionsort(arr, n);
    cout<<endl;
    //Displays the Sorted array
    cout<<"Sorted Array: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}