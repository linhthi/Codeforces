#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] == 1) {
                ans = 2;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}