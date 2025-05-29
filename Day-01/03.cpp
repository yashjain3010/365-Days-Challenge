#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;

    int n = number;

    while(n > 0){
        int digit = n%10;
        int factorial = 1;
        for(int i = 1 ; i <= digit ; i++){
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }

    if(sum == number){
        cout << number << " is a strong number." << endl;
    } else {
        cout << number << " is not a strong number." << endl;
    }
    return 0;
}