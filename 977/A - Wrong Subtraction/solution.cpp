 #include <bits/stdc++.h>
using namespace std;
int Isage(int no,int times) {
    while (times--) {
        if (no%10==0) {
            no=no/10;
        }
        else {
            no=no -1;
        }
 
    }
    return no;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int no;
    int times;
    cin>>no>>times;
    cout<<Isage(no,times);
    return 0;
}