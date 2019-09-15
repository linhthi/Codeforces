#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    int t; cin >> t;
    while (t--) {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        int x,y;
        if (b < 2) cout << "0\n";
        else {
            if (h > c) {
                x = min(p, b/2);
                y = min((b-x*2)/2, f);
            }
            else {
                y = min(b/2, f);
                x = min((b-y*2)/2, p);
            }
            cout << x*h + y*c << endl;
        }
    }
    return 0;
}