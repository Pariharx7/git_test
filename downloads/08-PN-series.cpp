#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number < 2) {
        return false;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
    }
    return true;
}

void displayPrimes(int number) {
    for (int i = 2; i <= number; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int num;
    cout << "Enter a number up to which you want to print the prime number series: ";
    cin >> num;
    displayPrimes(num);

    return 0;
}
