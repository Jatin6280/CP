#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
 
        long long total = b;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            total += min(x, a - 1);
        }
 
        cout << total << "
";
    }
    return 0;
}