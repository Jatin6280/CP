 #include <iostream>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    // Keep dividing by 2 as long as n is even
    while (n % 2 == 0) {
        n = n / 2;
    }
 
    // After removing all factors of 2:
    // If n is 1, it means the original number was a power of 2.
    // If n > 1, it means there is an odd divisor.
    if (n > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}