#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int T;
    cin >> T;
    while (T--) {
        int a, b, n;
        cin >> a >> b >> n;
        n %= 3;
        if (n == 0) cout << a << endl;
        else if (n == 1) cout << b << endl;
        else cout << (a^b) << endl;
    }
    return 0;
}