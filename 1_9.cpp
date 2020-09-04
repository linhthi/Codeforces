#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
if (y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    int a, m, n;
    vector<int> check;
    cin >> a >> m >> n;
    for (int i = m; i <= n; i++) {
        if (gcd(i, a) == 1) {
            check.push_back(i);
            cout << i << " ";
        }
    }
    cout << "\nThe result is:\n";
    for (int i = 0; i < check.size(); i++) {
        for (int j = i; j < check.size(); j++) {
            if ((check[i] * check[j]) % a == 1) cout << check[i] << " " << check[j] << "\n";
        }
    }
    
}