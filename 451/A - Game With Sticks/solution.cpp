 #include <iostream>
#include <algorithm> // Required for min()
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    // The number of moves is min(n, m)
    int moves = min(n, m);
 
    if (moves % 2 != 0) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }
 
    return 0;
}