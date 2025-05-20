#include<iostream>
using namespace std;

int main(){
    int first_digit, last_digit, sum, number;
    cout << "Enter a number: ";
    cin >> number;

    last_digit = number % 10;
    while(number >= 10){
        number /= 10;
    }

    first_digit = number;
    sum = first_digit + last_digit;
    cout << "The sum of the first and last digit is: " << sum << endl;
    return 0;
}