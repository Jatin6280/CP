#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin>>v[i];
        }
        bool flag=false;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if ((gcd(v[i],v[j]))<3) {
                    flag=true;
                };
            }
        }
        if (flag) {
            cout<<"YES"<<endl;
        }
      else {
          cout<<"NO"<<endl;
      }
    }
}