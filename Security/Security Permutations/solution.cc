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
    map<int, int> function;
    
    // Stores the function into a map.
    for (int x = 1; x <= n; x++) {
        int f_x;
        cin >> f_x;    
        function[x] = f_x;
    }
    
    // Prints the permutation function.
    for (int x = 1; x <= n; x++) {
        cout << function[function[x]] << endl;
    }
    
    return 0;
}
