#include <bits/stdc++.h>

using namespace std;

string s;
int sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        sum += s[i] -'0';
    }
    if (sum == 0) cout << "0";
    else if (sum == 1) cout << n/2;
    else cout << (n+1)/2;
    return 0;
}