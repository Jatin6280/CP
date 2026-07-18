#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
 
        long long ans = LLONG_MAX;
 
        // Option 1: No AI
        {
            long long speed = x + y;
            if (speed == 0) {
                // impossible, but constraints prevent this
            } else {
                long long hours = (n + speed - 1) / speed;  // ceiling division
                ans = min(ans, hours);
            }
        }
 
        // Option 2: Use AI
        {
            // First z hours: only Maxim writes
            long long lines_after_setup = (long long)z * x;
 
            if (lines_after_setup >= n) {
                // Finished during setup
                ans = min(ans, z);
            } else {
                long long remaining = n - lines_after_setup;
                long long speed_after = x + 10LL * y;
 
                if (speed_after > 0) {
                    long long extra_hours = (remaining + speed_after - 1) / speed_after;
                    long long total_hours = z + extra_hours;
                    ans = min(ans, total_hours);
                } else {
                    // Only if x==0 and y==0, but handled above
                }
            }
        }
 
        cout << ans << '
';
    }
    return 0;
}