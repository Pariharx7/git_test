// CPP Program to find the factorial of entered number.
#include <iostream>
using namespace std;

int main(){

    int num, i , fact = 1;
    cout << "Enter a Number: ";
    // Taking input from User
    cin >> num;

    if(num == 0){
        cout << "The factorial of 0 is 1"<<endl;
    } 
    else if(num < 0){
        cout << "Please Enter a Number that is greater than or equal to 0"<<endl;
    } else{
        for(i = 1; i <= num; i = i + 1){
            fact *= i;
        }
        cout << "The factorial of "<< num << " is : "<< fact<<endl;
    }

    return 0;
}