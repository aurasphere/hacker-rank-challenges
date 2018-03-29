#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> Y;
    
    // Reads each x and f(x) element.
    for (int x = 0; x < n; x++) {
        int f_x;
        cin >> f_x;
        
        // If we already found an y in Y with that value, the function is not bijective.
        if (find(Y.begin(), Y.end(), f_x) != Y.end()) {
            cout << "NO" << endl;
            return 0;
        }
        
        // Adds this element to the Y set.
        Y.push_back(f_x);
    }
    
    // Function is bijective.
    cout << "YES" << endl;
    return 0;
}
