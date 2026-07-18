#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int count=0;
     while (n>0) {
         int a;
         int b;
         int c;
         cin >> a >> b >> c;
         if (a+b+c>=2) {
             count++;
         }
         n--;
     }
    cout<<count;
    return 0;
}