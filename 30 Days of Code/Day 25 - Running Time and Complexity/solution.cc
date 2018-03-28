#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void primeTest(int number) {
    
    // Number lower than 2 are not primes.
     if (number < 2) {
        cout << "Not prime" << endl;
        return;
     }
    
    // 2 is the only prime even number.
    if (number == 2) {
        cout << "Prime" << endl;
        return;
    }
    
    // Filter out even numbers to speed things up.
    if (number % 2 == 0) {
        cout << "Not prime" << endl;
        return;
    }
    
    // Primality test by checking up to the square root of the number.
    double sqrt_number = sqrt(number);
    for (int j = 3; j <= sqrt_number; j+=2) {
        
        // Number is not prime.
        if (number % j == 0) {
            cout << "Not prime" << endl;
            return;
        }
    }
    // Number is prime.
    cout << "Prime" << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    int temp;
    
    // Reads the input and checks if the numbers are prime.
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        primeTest(temp);
    }

    return 0;
}
