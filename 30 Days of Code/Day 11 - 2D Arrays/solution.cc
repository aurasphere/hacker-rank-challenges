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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    // Max sum initial values takes into account the possibility of negative integers.
    int max_sum = -50;
    int tmp_sum;
    
    // Iterates the arrays and computes the hourglass sum.
    for(int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            tmp_sum = 0;
            
            tmp_sum += arr[i - 1][j - 1];
            tmp_sum += arr[i - 1][j];
            tmp_sum += arr[i - 1][j + 1];
            
            tmp_sum += arr[i][j];
            
            tmp_sum += arr[i + 1][j - 1];
            tmp_sum += arr[i + 1][j];
            tmp_sum += arr[i + 1][j + 1];
            
            // Check if we found a new maximum.
            if (tmp_sum > max_sum) {
                max_sum = tmp_sum;
            }
        }
    }
    
    // Prints the result.
    cout << max_sum << endl;
    
    return 0;
}
