#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for(int i = 1 ; i <= number ; i++){
        for(int j = i ; j < number ; j++){
            cout << " ";
        }

        for(int j = 1 ; j <= (2 * i - 1) ; j++){
            if(i == 1 || i == number || j == 1 || j == (2 * i - 1)){
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}