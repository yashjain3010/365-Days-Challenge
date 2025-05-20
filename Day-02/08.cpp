#include<iostream>
using namespace std;

int main(){
    int end;
    cout << "Enter the end of the range: ";
    cin >> end;

    for(int i = 2 ; i <= end; i++){
        bool isPrime = true;
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
    return 0;
}