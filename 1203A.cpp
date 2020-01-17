#include <bits/stdc++.h>
 
using namespace std;
  
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        bool f = true;
        for (int i = 0; i < n; i++) {
            int d = a[(i + 1) % n] - a[i];
            if (!(d == 1 || d == -(n - 1))) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << "YES\n";
            continue;
        }
        f = true;
        for (int i = 0; i < n; i++) {
            int d = a[(i + 1) % n] - a[i];
            if (!(d == -1 || d == n - 1)) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << "YES\n";
            continue;
        } else {
            cout << "NO\n";
        }

    }

    return 0;    
}