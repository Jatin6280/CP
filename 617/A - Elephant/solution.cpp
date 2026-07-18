 #include <bits/stdc++.h>
using namespace std;
int Isage(int a) {
    if (a<6) {
        return 1;
    }
    if (a%5==0) {
        return a/5;
    }
    return a/5+1;
 
 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    cout<<Isage(a);
    return 0;
}