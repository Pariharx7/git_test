// CPP Program to Print Fibonacci Number Series
#include <iostream>
using namespace std;

int main()
{
	int num = 7, i, current;
	int last = 0, prev = 1;
	cout << "Fibonacci Series : ";
	
	for(i = 1; i <= num; i = i + 1){
		cout << last << "\t";
		current = last + prev;
		last = prev;
		prev = current;
	}
	return 0;
}
