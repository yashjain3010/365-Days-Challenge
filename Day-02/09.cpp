#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for(int i = 2 ; i <= num; i++){
        bool isPrime = true;
        if(num % i == 0){
        for(int j = 2 ; j <= i/2 ; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
            cout << i << " ";
        }
    }
    }
    return 0;
}