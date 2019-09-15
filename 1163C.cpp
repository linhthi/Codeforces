#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 7;
int n, m, cntkhac, ans, dem, x[maxn], y[maxn];
 
map<pair<int, int>, int> mp;
map<pair<int, int>, bool> chk[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if(fopen("test.inp", "r")) freopen("test.inp", "r", stdin), freopen("test.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            int gau = x[j] - x[i];
            int meo = y[j] - y[i];
            int haha = __gcd(abs(gau), abs(meo));
            gau /= haha;
            meo /= haha;
            if(gau < 0) gau = -gau, meo = -meo;
            else if(gau == 0 && meo < 0) meo = - meo;
            pair<int, int> x = {gau, meo};
            if(chk[i][x])
            {
                chk[j][x] = true;
                continue;
            }
            else
            {
                chk[j][x] = chk[i][x] = true;
            }
            mp[{gau, meo}]++;
            dem++;
        }
    }
    int ans = 0;
    for(auto i: mp)
    {
        ans += i.second * (dem - i.second);
    }
    cout << ans / 2;
}