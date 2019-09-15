#include <bits/stdc++.h>
using namespace std;
const int SIZE = 1e6+10
typedef vector<int> VI;

int main() {
    int n, k;
    cin >> n >> k;
    VI a[SIZE];
    for (int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        int t = 0;
        while (v) {
            a[v].push_back(t);
            v >>= 1;
            t++;
        }
        a[0].push_back(t);
    }
    int ans = 1e9;
    for (int i = 0; i < SIZE; i++) {
        if (a[i].size() >= k) {
            sort(a[i].begin(),a[i].end());
            int v = 0;
            for (int j = 0; j < k; j++) {
                v += a[i][j];
            }
            ans = min(ans, v);
        }
    }
    cout << ans;
    return 0;
}