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
    map<string, string> phoneBook;
    string phonebookName;
    string phonebookNumber;
    string lookupName;
    
    // Reads n.
    cin >> n;
    
    // Reads the phonebook.
    for (int i = 0; i < n; i++) {
        cin >> phonebookName;
        cin >> phonebookNumber;
        phoneBook[phonebookName] = phonebookNumber;
    }
    
    // Prints the numbers if available.
    while(cin >> lookupName) {
        if (phoneBook.count(lookupName) > 0) {
            cout << lookupName << '=' << phoneBook[lookupName] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
