#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map<int, int> inverse_function;
    
    // Stores the inverse function in a map.
    for (int x = 1; x <= n; x++) {
        int f_x;
        cin >> f_x;
        inverse_function[f_x] = x;
    }
    
    // Prints the inverse function.
    for (int x = 1; x <= n; x++) {
        cout << inverse_function[x] << endl;    
    }
    
    return 0;
}
