#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--) {
        long long x,y,a,b;
        cin >> x >> y >> a >> b;
        if ((y - x) % (a + b) == 0)
            cout << ((y - x) / (a + b)) << endl;
        else cout << -1 << endl;
    }
    return 0;
}