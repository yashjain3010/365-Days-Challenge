#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, max;

    /* Input three numbers from user */
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;

    if((num1 > num2) && (num1 > num3)){
        max = num1; /* If num1 > num2 and num1 > num3 */
    }
    else if(num2 > num3){
        max = num2; /* If num1 is not > num2 and num2 > num3 */
    }
    else{
        max = num3; /* If num1 is not > num2 and num2 is also not > num3 */
    }

    /* Print maximum number */
    cout<<"Maximum among all three numbers is "<< max;

    return 0;
}