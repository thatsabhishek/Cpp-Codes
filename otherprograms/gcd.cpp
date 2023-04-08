#include <iostream>
using namespace std;

int main(){
    int num1, num2, gcd;
    cout << "Enter first numbers: ";
    cin >> num1;
    cout << "Enter second numbers: ";
    cin >> num2;
    for(int i = 1; i <= num1 && i <= num2; ++i){
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    cout << "G.C.D of " << num1 << " and " << num2 << " is " << gcd;
    return 0;
}