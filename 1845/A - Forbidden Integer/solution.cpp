#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k, x;
    cin >> n >> k >> x;
 
    // Case 1: 1 is allowed
    if (x != 1) {
        cout << "YES
" << n << "
";
        for (int i = 0; i < n; ++i) cout << "1 ";
        cout << "
";
    }
    // Case 2: 1 is forbidden, but we can't make n (k=1)
    else if (k == 1) {
        cout << "NO
";
    }
    // Case 3: Only 2 is available (k=2)
    else if (k == 2) {
        if (n % 2 == 0) {
            cout << "YES
" << n / 2 << "
";
            for (int i = 0; i < n / 2; ++i) cout << "2 ";
            cout << "
";
        } else {
            cout << "NO
";
        }
    }
    // Case 4: 2 and 3 are available (k >= 3)
    else {
        cout << "YES
";
        if (n % 2 == 0) {
            cout << n / 2 << "
";
            for (int i = 0; i < n / 2; ++i) cout << "2 ";
        } else {
            cout << (n - 3) / 2 + 1 << "
3 ";
            for (int i = 0; i < (n - 3) / 2; ++i) cout << "2 ";
        }
        cout << "
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}