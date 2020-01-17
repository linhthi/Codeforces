#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 7;
int n, m, cntkhac, ans;
int cnt[maxn], dem[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if(fopen("test.inp", "r")) freopen("test.inp", "r", stdin), freopen("test.out", "w", stdout);
    cin >> n;
    int gau = 0;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(dem[x] == 0)
        {
            gau++;
            dem[x]++;
            if(cnt[dem[x]] == 0) cntkhac++;
            cnt[dem[x]]++;
        }
        else
        {
            cnt[dem[x]]--;
            if(cnt[dem[x]] == 0) cntkhac--;
            dem[x]++;
            if(cnt[dem[x]] == 0) cntkhac++;
            cnt[dem[x]]++;
        }
        if(gau == 1) ans = max(ans, i);
        if(cntkhac == 1 && cnt[1] > 0) ans = max(ans, i);
        if(cntkhac == 2)
        {
            if(cnt[1] == 1) ans = max(ans, i);
            if(cnt[dem[x] - 1] > 0)
            {
                if(cnt[dem[x]] == 1) ans = max(ans, i);
            }
            if(cnt[dem[x] + 1] > 0)
            {
                if(cnt[dem[x] + 1] == 1) ans = max(ans, i);
            }
        }
    }
    cout << ans;
}