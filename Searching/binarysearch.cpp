#include <iostream>
using namespace std;

int binarysearch(int arr[50], int n, int x){
    int beg = 0, end = n-1;
    int mid = (beg+end)/2;
    while(beg<end && arr[mid] != x){
        if (arr[mid] > x)
            end = mid-1;
        else
            beg = mid+1;
        mid = (beg+end)/2;   
    }
    if (arr[mid]==x)
        return mid;
    else
        return -1;
}

int main(){
    int n, arr[50],x;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements in the increasing order because Binary Search used for only sorted array"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Enter number:";
        cin>>arr[i];
    }
    cout<<"Entered Array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

    cout<<"Element to be searched:";
    cin>>x;

    int result = binarysearch(arr,n, x);;
    if(result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << result << endl;
    return 0;
}
