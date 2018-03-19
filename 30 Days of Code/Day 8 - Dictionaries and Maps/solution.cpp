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
    map<string, string> phonebook;
    string phonebook_name;
    string phonebook_number;
    string lookup_name;
    
    // Reads n.
    cin >> n;
    
    // Reads the phonebook.
    for (int i = 0; i < n; i++) {
        cin >> phonebook_name;
        cin >> phonebook_number;
        phonebook[phonebook_name] = phonebook_number;
    }
    
    // Prints the numbers if available.
    while(cin >> lookup_name) {
        if (phonebook.count(lookup_name) > 0) {
            cout << lookup_name << '=' << phonebook[lookup_name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
