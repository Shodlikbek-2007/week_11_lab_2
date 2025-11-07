#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a, b, result;  // Empty vectors
    
    // Read first vector
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    
    // Read second vector  
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        b.push_back(num);
    }
    
    // Calculate sum
    for (int i = 0; i < n; i++) {
        result.push_back(a[i] + b[i]);
    }
    
    // Output result
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}