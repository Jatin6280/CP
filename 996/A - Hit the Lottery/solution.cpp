 #include <bits/stdc++.h>
using namespace std;
int Isage(int cost)  {
    int ans=0;
     ans+=cost/100;
    cost%=100;
    ans+=cost/20;
    cost%=20;
    ans+=cost/10;
    cost%=10; ans+=cost/5;
    cost%=5; ans+=cost/1;
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cost;
    cin>>cost;
    cout<<Isage(cost);
    return 0;
}