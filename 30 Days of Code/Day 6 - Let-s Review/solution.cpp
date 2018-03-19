#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    string S;
    string even;
    string odd;
    
    // Reads T.
    cin >> T;
    
    // Reads each S line.
    for(int i = 0; i < T; i++) {
        cin >> S;
        even = "";
        odd = "";
        
        // For each character, adds it to the even or odd string to print.
        for (int j = 0; j < S.length(); j++) {
            if (j % 2 == 0) {
                even += S[j];
            } else {
                odd += S[j];
            }
        }
        
        // Prints the result.
        cout << even << ' ' << odd << endl;
    }
    
    return 0;
}
