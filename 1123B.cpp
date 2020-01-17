#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0 ; i < n; i++ ) {
        int x;
        cin >> x;
        s += (x % 2);
    }

    cout << min(s, n-s) << endl;

    
    return 0;
}