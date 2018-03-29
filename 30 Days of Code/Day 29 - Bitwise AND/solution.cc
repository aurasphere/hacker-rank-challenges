#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        
        int max_bitwise_and = 0;
        
        // Iterates the S set (a and b in S).
        for (int a = 1; a < n; a++) {
            for (int b = a + 1; b <= n; b++) {
             
                // Computes the bitwise and and checks if it's better than our max.
                int tmp_bitwise_and = a & b;
                if (tmp_bitwise_and < k && tmp_bitwise_and > max_bitwise_and) {
                    max_bitwise_and = tmp_bitwise_and;
                }
            } 
        }
        
        // Prints the result for this line and goes to the next.
        cout << max_bitwise_and << endl;
    }
    return 0;
}
