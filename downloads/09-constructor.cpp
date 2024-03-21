#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        // Default constructor
        Car(string brand, string model){
            cout << brand <<" " << model << endl;
        }
};

int main () {

    Car One("BMW","X5");
    Car Two("Ford","Mustang");

    return 0;
} 