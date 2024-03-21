#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter the number of Persons : ";
    cin >> N;

    struct {
        string firstName, lastName;
        int age;
    } Person[N];

    // info lene ke liye loop
    for(int i = 0; i < N; i++){
        cout <<"\nEnter details of Person " << i + 1 << ":\n";
        cout << "Enter First Name: ";
        cin >> Person[i].firstName;
        cout << "Enter Last Name: ";
        cin >> Person[i].lastName;
        cout << "Enter the Age: ";
        cin >> Person[i].age;
    }

    int eldestAge = 0;
    for (int i = 1; i < N; i++) {
        if(Person[i].age > Person[eldestAge].age){
            eldestAge = i;
        }
    }

    cout << "\n The eldest person is: \n";
    cout << "Name: " << Person[eldestAge].firstName << + " " << Person[eldestAge].lastName << endl;
    cout << "Age: " << Person[eldestAge].age << endl;
    return 0;
}