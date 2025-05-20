#include<iostream>
using namespace std;

int main(){
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    int minimum;

    if(number1 < number2){
        minimum = number1;
    } else {
        minimum = number2;
    }

    for(int i = minimum ; i >= 1 ; i--){
        if(number1 % i == 0 && number2 % i == 0){
            cout << "GCD of " << number1 << " and " << number2 << " is: " << i << endl;
            break;
        }
    }
    return 0;
}