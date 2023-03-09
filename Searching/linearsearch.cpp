#include <iostream>
using namespace std;

int linearsearch(int arr[50], int n, int x){
    int j;
    for(j=0; j<n; j++){
        if (arr[j] == x)
            return j;       
    }
    return -1;
}

int main(){
    int n, arr[50],x;
    cout<<"Enter the number of elements:";
    cin>>n;
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

    int result = linearsearch(arr,n, x);;
    if(result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << result << endl;
    return 0;
}
