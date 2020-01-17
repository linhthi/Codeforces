#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
	cin >> n >> m;
	if (!m) cout << 1 << endl;
	else if (m <= n / 2) cout << m << endl;
	else cout << n - m << endl;
    return 0;
}