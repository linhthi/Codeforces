#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long str, in, exp;
        cin >> str >> in >> exp;
        long long cnt = str + exp - in;
        
        if (cnt % 2) cnt++;
        cout << cnt/2 << endl;
    }
    return 0;
}