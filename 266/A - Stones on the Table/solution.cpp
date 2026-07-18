  #include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int removals = 0;
    // We stop at n-1 because we check s[i+1]
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            removals++;
        }
    }
 
    cout << removals << endl;
 
    return 0;
}