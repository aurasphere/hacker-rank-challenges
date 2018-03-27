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
    int n;
    cin >> n;
    
    int max_consecutive_digits = 0;
    int tmp_consecutive_digits = 0;
    
    while(n > 0) {
        // If the remainder is odd, we increment the 1 digit's counter.
        if (n % 2 == 1) {
            tmp_consecutive_digits++;
        } else {
            tmp_consecutive_digits = 0;
        }
          
        // Update the max.
        if (tmp_consecutive_digits > max_consecutive_digits) {
            max_consecutive_digits = tmp_consecutive_digits;
        }   
        
        // Update the number to convert.
        n = n / 2;
    }
    
    // Prints the result.
    cout << max_consecutive_digits << endl;
    
    return 0;
}
