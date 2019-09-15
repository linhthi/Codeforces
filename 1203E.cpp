#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	sort(begin(a), end(a));
	int ans = 0, last = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] - 1 > last) --a[i];
		if (a[i] == last) ++a[i];
		if (a[i] > last) {
			++ans;
			last = a[i];
		}
	}
	cout << ans << endl;
}
