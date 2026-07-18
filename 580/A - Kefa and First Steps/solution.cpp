#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
 
    int max_len = 1;
    int current_len = 1;
 
    for(int i = 0; i < n - 1; i++) {
        if (a[i+1] >= a[i]) { // It's non-decreasing
            current_len++;
        } else {
            // The streak is broken, compare and reset
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }
 
    // Final check in case the longest streak ended at the last element
    max_len = max(max_len, current_len);
 
    cout << max_len << endl;
 
    return 0;
}