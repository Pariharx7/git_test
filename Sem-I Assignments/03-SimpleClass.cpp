// CPP Program to demonstrate Classes and Objects.
#include <iostream>
using namespace std;

class System{

	public:
		int sys_no;
		string System_name;
};

int main(){
	
	System sys1;
	sys1.sys_no = 01;
	sys1.System_name = "HP System 01";
	
	cout<<sys1.sys_no<<endl;
	cout<<sys1.System_name<<endl;
	return 0;
}
