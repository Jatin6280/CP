#include <algorithm>
#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    int min_diff = INT_MAX;
    // Iterate through all possible subsets of size n
    for (int i = 0; i <= m - n; i++) {
        int current_diff = v[i + n - 1] - v[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }
 
    cout << min_diff << endl;
    return 0;
}