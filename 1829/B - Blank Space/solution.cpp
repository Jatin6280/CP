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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        if (n == 1 && v[0] == 1) {
            cout << 0 << endl;
            continue;
        }
 
        int maxLen = 0;
        int currLen = 0;
 
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                currLen++;
                maxLen = max(maxLen, currLen);
            } else {
                currLen = 0;  // reset when 1 is encountered
            }
        }
 
        cout << maxLen << endl;
    }
 
    return 0;
}