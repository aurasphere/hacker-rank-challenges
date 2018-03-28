#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int actual_day;
    int actual_month;
    int actual_year;
    int expected_day;
    int expected_month;
    int expected_year;
    
    // Reads the input values.
    cin >> actual_day;
    cin >> actual_month;
    cin >> actual_year;
    cin >> expected_day;
    cin >> expected_month;
    cin >> expected_year;
    
    // Checks the year.
    if (actual_year > expected_year) {
        cout << 10000;
        return 0;
    } 
    
    // Checks the month.
    if (actual_year == expected_year && actual_month > expected_month) {
        cout << 500 * (actual_month - expected_month);
        return 0;
    }
    
    // Checks the day.
    if (actual_year == expected_year && actual_month == expected_month && actual_day > expected_day) {
        cout << 15 * (actual_day - expected_day);
        return 0;
    }

    // No fine applied.
    cout << 0;
    return 0;
}
