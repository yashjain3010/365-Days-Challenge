#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int n = number;

    int sum = 0;

    while(number){
        int digit = number % 10;
        int product = digit * digit * digit;
        sum += product;
        number /= 10;
    }
    if(sum == n){
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}