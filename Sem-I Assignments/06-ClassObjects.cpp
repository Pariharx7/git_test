// CPP Program to store the information of 10 Students using Object arrays in CPP Classes.
#include <iostream>
using namespace std;

// Declaring a student class
class Student {
    public:
        int rollNumber;
        float marks;

        void setInfo(int rollNumber, float marks){
            this -> rollNumber = rollNumber;
            this -> marks = marks;
        }

        void displayInfo() {
            cout << "Roll Number : " << rollNumber << endl;
            cout << "Marks : " << marks << endl;
        }
};

int main(){

    Student students[10];

    for(int i = 0; i < 10;i = i + 1){
        string name;
        int rollNumber;
        float marks;

        cout << "Enter information for student: "<< (i + 1) << ":" << endl;
        cout << "Roll Number: ";
        cin >> rollNumber;
        cout << "Marks: ";
        cin >> marks;

        students[i].setInfo(rollNumber, marks);
    }

    cout << "Information of all Students: "<<endl;
    for(int i = 0; i < 10; i = i + 1){
        students[i].displayInfo();
    }
    return 0;
}
