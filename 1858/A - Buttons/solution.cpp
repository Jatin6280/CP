       #include <iostream>
using namespace std;
 
int main() {
    // Optimize I/O for faster execution
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        // Anna goes first.
        // If c is odd, Anna takes the extra shared button: (c + 1) / 2
        // If c is even, they split it equally: c / 2
        // Anna wins if (a + (c + 1) / 2) > (b + c / 2)
 
        if (a + (c + 1) / 2 > b + c / 2) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
    return 0;
}