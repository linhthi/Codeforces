#include <bits/stdc++.h>
 
using namespace std;

long long gcd(long long a, long long b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);

	int n; cin >> n;
    vector<long long> a(n+1);
    long long g;
    for (int i = 1; i <= n ; i++) {
        cin >> a[i];
        if (i == 1) g = a[i];
        else g = gcd(g, a[i]);
    }
    long long ans = 0;
    for (long long i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            ans++;
            if (i != g/i) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}