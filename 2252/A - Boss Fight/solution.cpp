#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long total = 0;
        map<int,int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
            freq[a[i]]++;
        }
 
        // find max frequency
        int mx = 0;
        for (auto &p : freq) mx = max(mx, p.second);
 
        // among values with freq == mx, pick smallest value
        int valX = INT_MAX;
        for (auto &p : freq) {
            if (p.second == mx) valX = min(valX, p.first);
        }
 
        int m = n - mx;
        int excess = max(0, mx - m - 1);
        int wasted = max(0, excess - 1);
 
        long long answer = total - (long long)wasted * valX;
        cout << answer << "
";
    }
    return 0;
}