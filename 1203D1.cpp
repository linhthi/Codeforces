#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    string s, t;
	cin >> s >> t;
	int j = 0;
	vector<int> f(t.size() + 1, s.size());
	f[0] = -1;
	for (int i = 0; i < s.size(); ++i) {
		if (j < t.size() && s[i] == t[j]) {
			f[++j] = i;
		}
	}
	j = 0;
	int ans = 0;
	for (int i = s.size() - 1; i >= 0; --i) {
		ans = max(ans, i - f[t.size() - j]);
		if (j < t.size() && s[i] == t[t.size() - j - 1]) ++j;
	}
	cout << ans << endl;
}