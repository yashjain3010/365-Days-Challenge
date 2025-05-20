#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int first_digit = 0;
    int second_digit = 1;
    int third_digit;

    cout << "Fibonacci series: " << first_digit << " " << second_digit << " ";

    for(int i = 2 ; i < number ; i++){
        third_digit = first_digit + second_digit;
        first_digit = second_digit;
        second_digit = third_digit;

        cout << third_digit << " ";
    }

    return 0;

}