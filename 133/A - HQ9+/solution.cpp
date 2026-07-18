#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    getline(cin, s);
 
    // Check each character individually
    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES" << endl;
            return 0; // Exit immediately if an output-producing instruction is found
        }
    }
 
    // If the loop finishes without returning, no output-producing instructions were found
    cout << "NO" << endl;
 
    return 0;
}