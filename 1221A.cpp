#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long t, sum = 0;
        while(n--) {
            cin >> t;
            if (t <= 2048)
                sum += t;
        }

        cout << (sum >= 2048 ? "YES\n" : "NO\n");
       
    }
    return 0;
}