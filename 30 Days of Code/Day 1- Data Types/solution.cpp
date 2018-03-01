#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> j;    
    cin >> e;
	
    // Removes the last "/n" character from the stream since this will make getline return only that.
    cin.ignore();
    getline(cin, t);

    // Print the sum of both integer variables on a new line.
    cout << j + i << endl;

    // Print the sum of the double variables on a new line.
    // Sets decimal precision to 1 decimal number before printing the result.
    cout << fixed << setprecision(1) << e + d << endl;    

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + t << endl;

	return 0;
}
