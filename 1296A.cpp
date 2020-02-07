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
        int odd = 0, even = 0;
        for (int i = 0; i <n; i++) {
            int x;
            cin >> x;
            if (x%2) 
                odd++;
            else 
                even++;
        }
        cout << (((odd > 0 && even > 0) || (odd > 0 && n % 2 != 0))?"YES":"NO") << endl;
    }
    return 0;

}