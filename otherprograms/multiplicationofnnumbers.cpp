#include <iostream>
using namespace std;

int main(){
    int n, product = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        product *= i;
    }
    cout << "Product of first " << n << " natural numbers is " << product << endl;
    return 0;
}