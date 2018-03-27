#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

//Write your code here
class Calculator : public AdvancedArithmetic {
    public:
        int divisorSum(int n) {
            int divisor_sum = 0;
            int current_divisor = n;
            // Iterates all the preceding number to find divisors.
            while (current_divisor > 0) {
                if (n % current_divisor == 0) {
                    divisor_sum += current_divisor;
                }
                current_divisor--;
            }
            return divisor_sum;
        }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
