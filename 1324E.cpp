#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h, l, r;
    cin >> n >> h >> l >> r;
    int a[n];
    int s = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i] - 1;
        s = s % h;
        if (s >= l && s <= r) {
            cnt++;
        }
        else {
            if (s+1 >= l && s+1 <= r) {
                cnt++;
            }
        }
        cout << s << endl;
    }
    cout << cnt << "\n";
}