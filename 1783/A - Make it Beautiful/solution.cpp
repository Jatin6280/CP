#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        // If all elements are equal, impossible
        if (a[0] == a[n - 1]) {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
 
        // Print in "beautiful" zig-zag: smallest, largest, next smallest, next largest, ...
        int i = 0, j = n - 1;
        while (i <= j) {
            if (i == j) {
                cout << a[i];
            } else {
                cout << a[i] << " " << a[j] << " ";
            }
            i++;
            j--;
        }
        cout << "
";
    }
 
    return 0;
}