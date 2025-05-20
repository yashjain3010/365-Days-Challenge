#include<iostream>
using namespace std;

int main(){
    int end;
    cout << "Enter a number n: ";
    cin >> end;

    for(int i = 1 ; i<= end ; i++){
        int sum = 0;
        int n = i;
        while(n){
            int digit = n % 10;
            int product = digit * digit * digit;
            sum += product;
            n /= 10;
        }

        if(i == sum){
            cout << i << " is an Armstrong number." << endl;
        }
    }
    return 0;
}