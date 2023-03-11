
#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n, arr[20], temp;
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter number:";
        cin>>arr[i];
    }

    //Displays the unsorted array
    cout<<"Unsorted Array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    
    bubblesort(arr, n);

    //Displays the sorted array
    cout<<"Sorted Array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}
