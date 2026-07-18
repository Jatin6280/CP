#include <iostream>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
 
    long long count_odds = (n + 1) / 2;
 
    if (k <= count_odds) {
        cout << (k * 2) - 1 << endl;
    } else {
        cout << (k - count_odds) * 2 << endl;
    }
 
    return 0;
}