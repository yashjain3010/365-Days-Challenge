#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int n = number;
    int palindrome = 0;

    while(n > 0){
        int digit = n % 10;
        n /= 10;
        palindrome = palindrome * 10 + digit;
    }

    if(palindrome == number){
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}