#include <iostream>
using namespace std;

int main(){

    int N;
    cout << "Enter the number of employees : ";
    cin >> N;

    struct {
        string firstName, lastName;
        float basicSalary, deduction, netSalary;
    } employees[N];

    for (int i = 0; i < N; i++){
        cout << "\nEnter details of employee " << i+1 << ":\n";
        cout << "Enter First Name: ";
        cin >> employees[i].firstName;
        cout << "Enter Last Name: ";
        cin >> employees[i].lastName;
        cout << "Basic Salary: ";
        cin >> employees[i].basicSalary;
        cout << "Deductions: ";
        cin >> employees[i].deduction;

        // net salary calculate krne ke liye
        // net salary = basis salary - deductions
        employees[i].netSalary = employees[i].basicSalary - employees[i].deduction;
    }


    for (int i = 0; i < N; i++) {
        cout << "\n\n\nDetails of employee " << i+1 << ":\n";
        cout << "Name: " << employees[i].firstName << "" << + " " << employees[i].lastName << "\n";
        cout << "Net Salary: " << employees[i].netSalary << "\n";
    }


    return 0;
}