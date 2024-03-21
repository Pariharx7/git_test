#include <iostream>
using namespace std;


class Data{
    public:
        void info();
};

void Data::info() {cout << "I got some data";}
int main(){
    Data data1;
    data1.info();

    return 0;
}