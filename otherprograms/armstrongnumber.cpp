#include <iostream>
using namespace std;

bool is_armstrong_number(int num) {
    int n = num;
    int r, x, i;
    int a = to_string(n).length();
    int sum_of_digits = 0;
    while (n > 0) {
        r = n % 10;
        x = 1;
        for(i=0; i<a; i++)
            x *= r;
        sum_of_digits += x;
        n = n / 10;
    }
    if (sum_of_digits == num) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    bool armstrong_num = is_armstrong_number(number);
    if (armstrong_num) {
        cout << "Yes, number " << number << " is an armstrong number." << endl;
    }
    else {
        cout << "No, number " << number << " is not an armstrong number." << endl;
    }
    return 0;
}