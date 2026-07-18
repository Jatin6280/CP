#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int count = n / 2;
    cout << count << endl;  // Count first [web:185]
 
    for (int i = 0; i < count - 1; i++) {
        cout << "2 ";
    }
 
    if (n % 2 == 1) {
        cout << "3" << endl;  // Odd: last is 3 [web:186]
    } else {
        cout << "2" << endl;  // Even: last is 2
    }
 
    return 0;
}