#include <iostream>
using namespace std;
int main()
{

    
    int *s = new int;
    
    *s = 32;
    
    cout << "Value of s is " << *s << endl;
    cout << "Memory location is " << &s << endl;
    
    delete s;
    return 0;
}