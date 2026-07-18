 #include <bits/stdc++.h>
using namespace std;
int Isage(int a, int b) {
    int count = 0;
 
    while (a <= b) {
        a *= 3;
        b *= 2;
        count++;
    }
 
    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    cout<<Isage(a,b)<<endl;
    return 0;
}