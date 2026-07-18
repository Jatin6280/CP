 #include <bits/stdc++.h>
using namespace std;
#include <vector>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int mySum = 0;
    int count = 0;
 
    int total = 0;
    for (int x : v) {
        total += x;
    }
 
    for (int i = 0; i < n; i++) {
        mySum += v[i];
        count++;
 
        if (mySum > total - mySum) {
            cout << count;
            break;
        }
    }
 
 
    return 0;
}