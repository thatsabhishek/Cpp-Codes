#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        int small = arr[i];
        int loc = i;
        for(j=i+1; j<n; j++){
            if (arr[j] < small){
                small = arr[j];
                loc = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
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

    selectionsort(arr, n);
    cout<<endl;
    //Displays the Sorted array
    cout<<"Sorted Array: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}