#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--) {
        long long s;
        cin >> s;
        long long x = 0;
        while(s >= 10) {
            long long ob = s % 10;
            x += s - ob;
            s = s / 10 + ob;
        } 
        x += s;
        cout << x << endl;
    }
    return 0;
}