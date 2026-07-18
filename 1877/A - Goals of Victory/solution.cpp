#include <bits/stdc++.h>
using namespace std;
 
// Changed to void because we will print inside the function
void solve() {
    int n;
    cin >> n;
 
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int value;
        cin >> value;
        sum += value;
    }
 
    // Print the result here!
    cout << -sum << "
";
}
 
int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve(); // Now this prints the answer
    }
    return 0;
}