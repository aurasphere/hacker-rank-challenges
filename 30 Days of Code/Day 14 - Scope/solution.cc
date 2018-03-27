#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    // Add your code here
    Difference(vector<int> elements) {
        this->elements = elements;
    }

    void computeDifference() {
        maximumDifference = 0;
        int tmp_difference = 0;
        
        // Computes all the differences by iterating the array.
        for (int i = 0; i < elements.size() - 1; i++) {
            for (int j = i + 1; j < elements.size(); j++) {
                tmp_difference = abs(elements[i] - elements[j]);
                
                // Check if we found a new maximum.
                if (tmp_difference > maximumDifference) {
                    maximumDifference = tmp_difference;
                }
            }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
