// CPP Program to check entered number is prime or not.
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a Number : ";
	// Taking input from the User
	cin >> num;
	
	if(num < 2)
	{
		cout << "NOT PRIME";
		return 0;
	}
	else
	{
		for(int i = 2;i < num;i++)
		{
			if(num % i == 0){
				cout << "NOT PRIME";
				return 0;
			}
				}		
			cout << "PRIME";
	}
}
