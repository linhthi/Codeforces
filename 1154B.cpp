#include <bits/stdc++.h>
using namespace std;
int n, a[100], mark[101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    memset(mark,0,101);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mark[a[i]]++;
    }
    int cnt  = 0;
    vector<int> d;
    for (int i = 1; i <= 100; i++) {
        if (mark[i] > 0) {
            cnt++;
            d.push_back(i);
        }
    }
    
    if (cnt > 3) cout << "-1\n";
    else if (cnt == 3) {
        int t = d[0] + d[2];
        if ((t % 2 == 0) && (t / 2) == d[1]) cout << d[2] - t/2;
        else cout << "-1\n";
    }
    else if (cnt == 2) {
        int t = (d[0] + d[1]) / 2;
        if ((d[0] + d[1]) % 2 == 1) {
            cout << d[1] - d[0];
        }
        else if ((d[0] + d[1]) % 2 == 0) {
            cout << d[1] - t;
        }
        else cout << "-1\n";
    }
    else cout << "0";

        
}