#include <bits/stdc++.h>
using namespace std;
#include <iostream>
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int currentGroup=1;
        int maxGroup=1;
 
        for (int i=0; i<n-1; i++) {
            if (v[i+1]-v[i]<=k) {
                currentGroup++;
            }
            else {
                maxGroup=max(maxGroup, currentGroup);
                currentGroup=1;
            }
        }
        maxGroup=max(maxGroup, currentGroup);
        cout<<n-maxGroup<<endl;
    }
}