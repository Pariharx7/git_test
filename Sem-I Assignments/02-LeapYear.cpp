// CPP Program to check whether the year entered is Leap Year or not.
#include <iostream>
using namespace std;

int main(){
	
	int year;
	cout<<"Enter a Year : ";
	cin>>year;
	
	if((year % 400 == 0) && (year % 4 == 0 || year % 100 != 100)){
	    cout<<"Year "<< year << " is a Leap Year";
	} else {
		cout<<"Year "<< year <<" is not a Leap Year";
	}
	return 0;
}
