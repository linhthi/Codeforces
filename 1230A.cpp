#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    vector<int> a(4);
    for (int i = 0; i < 4 ; i++) cin >> a[i];

    sort(a.begin(), a.end());
    if ((a[0] + a[3] == a[1] + a[2]) || (a[0] + a[1] + a[2] == a[3])) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}