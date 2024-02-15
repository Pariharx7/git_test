// CPP Program to print the reversed number of entered number.
#include <iostream>
using namespace std;

int main(){
	
	int num, ans = 0, rem;
	cout << "Enter a Number : ";
	// Taking input from User
	cin >> num;
	
	while(num > 0){
		rem = num % 10;
		num /= 10;
		
		ans = ans * 10 + rem;
	}	
	cout << "Reverse of entered number is : " << ans << endl;
	return 0;
}
