#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int a,b;
    cin>>a>>b;
    vector<int> vec(a);
 
    for (int i=0;i<a;i++) {
        cin>>vec[i];
    }
    int cutoff = vec[b - 1];
    int count=0;
    for (int i=0;i<a;i++) {
        if (vec[i]>=cutoff && vec[i]>0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}