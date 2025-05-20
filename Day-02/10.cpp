#include<iostream>
using namespace std;

int main(){
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    int maximum;

    if(number1 > number2){
        maximum = number1;
    } else {
        maximum = number2;
    }

    for(int i = maximum ; i <= number1 * number2 ; i++){
        if(i % number1 == 0 && i % number2 == 0){
            cout << "LCM of " << number1 << " and " << number2 << " is: " << i << endl;
            break;
        }
    }
    return 0;
}