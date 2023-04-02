#include <iostream>
using namespace std;

void fib(int n){
    int a = 0, b = 1, sum = 0;
    cout<<a<<' ';
    cout<<b<<' ';
    while (n - 2 > 0){
        sum = a + b;
        cout<<sum<<' ';
        a = b;
        b = sum;
        n--;
    }
}

int main(){
    int num;
    cout<<"Enter a number to print Fabonacci Series:";
    cin>>num;
    fib(num);
    cout<<"..."<<endl;
    return 0;
}