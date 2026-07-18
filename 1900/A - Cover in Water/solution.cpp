#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        bool found = false;
        int dot_count = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dot_count++;
        }
 
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                found = true;
                break;
            }
        }
 
        if (found) {
            cout << 2 << endl;
        } else {
            cout << dot_count << endl;
        }
    }
    return 0;
}