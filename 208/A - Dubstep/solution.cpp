#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    bool spaceNeeded = false; // Tracks if we need to print a space before the next word
    for (int i = 0; i < s.length(); i++) {
        // Check if we found "WUB"
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
            i += 2; // Skip 'W', 'U', and 'B'
            if (spaceNeeded) {
                cout << " ";
                spaceNeeded = false; // Reset after printing the space
            }
        } else {
            cout << s[i];
            spaceNeeded = true; // We are now in a word, so a space will be needed before the next one
        }
    }
    return 0;
}