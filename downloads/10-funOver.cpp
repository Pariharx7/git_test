#include <iostream>
using namespace std;

int add (int a, int b) {
    return a + b;
}

double add (double a, double b) {
    return a + b;
}

int main () {

    int sum1 = add (3,4);
    double sum2 = add (3.3,4.4);

    cout << "Sum of Integers: " << sum1 << endl;
    cout << "Sum of doubles: " << sum2 << endl;

    return 0;
}