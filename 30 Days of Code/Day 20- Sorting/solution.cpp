#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Write Your Code Here
    int total_swaps = 0;
    int partial_swaps;
    for (int i = 0; i < n - 1; i++) {
        
        // Resets the partial counter at each new iteration.
        partial_swaps = 0;
        
        // For each element after, if the elements are not sorted, swaps them.
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                // Laziness at its finest:
                a[i] ^= a[j];
                a[j] ^= a[i];
                a[i] ^= a[j];
                
                // Increments the counters.
                partial_swaps++;
                total_swaps++;
            }
        }
        
        // If no swaps have been performed the array is sorted.
        if (partial_swaps == 0) {
            break;
        }
    }
    
    // Prints the solution
    cout << "Array is sorted in " << total_swaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;
    
    return 0;
}
