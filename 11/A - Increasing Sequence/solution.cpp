#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, d;
    cin >> n >> d;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    long long ans = 0;
 
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            long long need = a[i - 1] - a[i] + 1;
            long long moves = (need + d - 1) / d;
            ans += moves;
            a[i] += moves * d;
        }
    }
 
    cout << ans << '
';
    return 0;
}