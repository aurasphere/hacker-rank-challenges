#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
    
    // Computes the total cost.
    double tip = meal_cost * tip_percent / 100;
    double tax = meal_cost * tax_percent / 100;
    int total_cost = round(meal_cost + tip + tax);
    
    // Prints the result.
    cout << "The total meal cost is " << total_cost << " dollars." << endl;
    
    return 0;
}
