#include<iostream>
using namespace std;

int main(){
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    int power = 1;

    for(int i = 1; i <= exponent ; i++){
        power *= base;
    }
    cout << base << "^" << exponent << " = " << power << endl;
    return 0;
}