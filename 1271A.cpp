#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    int a, b, c, d, e, f;
    cin >> a >> b>> c >> d >> e >> f;
    int ans = 0;
    for (int i = 0; i <= min(a,d); i++) {
        int ct = i*e + min(min(b,c), d-i) * f;
        ans = max(ans, ct);
    }
    cout << ans;
    return 0;
}