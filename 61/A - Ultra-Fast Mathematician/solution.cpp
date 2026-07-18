#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string a, b;
 
    if (cin >> a >> b) {
 
        while (a.length() < b.length()) a = "0" + a;
        while (b.length() < a.length()) b = "0" + b;
 
 
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[i]) {
                cout << "0";
            } else {
                cout << "1";
            }
        }
        cout << endl;
    }
 
    return 0;
}