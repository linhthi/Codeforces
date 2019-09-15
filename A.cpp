#include <bits/stdc++.h>
 
using namespace std;
  

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T;
    cin >> T;
    while (T-- > 0) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];
        bool ans = true;
        for (int i = 0; i < n - 1; i++) {
            int target = max(0, h[i + 1] - k);
            if (target < h[i]) {
                m += h[i] - target;
            } else if (target - h[i] > m){
                ans = false;
                break;
            } else {
                m -= (target - h[i]);
            }
        }
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

        
}
