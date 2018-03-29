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
#include <regex>

using namespace std;


int main(){
    int N;
    cin >> N;
    
    vector<string> names;
    regex expression(".*@gmail.com");
    
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        
        // Filter out non-gmail emails.
        if (regex_match(emailID, expression)) {
            names.push_back(firstName);
        }
        
    }
    
    // Sorts the names.
    sort(names.begin(), names.end());
    
    // Prints the names.
    for (string &name : names) {
        cout << name << endl;
    }
    return 0;
}
