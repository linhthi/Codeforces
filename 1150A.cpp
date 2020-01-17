#include <bits/stdc++.h>
using namespace std;

int n, m, r;
int s[31], b[31];

int main() {
	cin >> n >> m >> r;
	for (int i = 0; i < n; i++) cin >> s[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(s, s+n);
	sort(b, b+m);
	cout << max(r, (r % s[0]) + (r / s[0]) * b[m-1]) << endl;
	return 0; 
}
