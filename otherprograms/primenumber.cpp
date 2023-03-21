#include <iostream>
using namespace std;

int main(){
    int n, i, check=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2; i<n; i++){
        if(n%i == 0)
            check++;
        else
            continue;
    }
    if (check == 0)
        cout<<n<<" is a prime number.";
    else
        cout<<n<<" is not a prime number.";
    
    return 0;
}