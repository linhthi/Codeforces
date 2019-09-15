#include <bits/stdc++.h>
 
using namespace std;

int n, r;
const int maxn = 3e5 + 5;
struct node {
    int a, b;
} p[maxn];
vector<node> q;
int dp[maxn * 2];
int ans, cnt;
 
bool cmp(node a, node b) {
    return a.a < b.a;
}
 
bool cmp1(node a, node b) {
    return a.a + a.b > b.a + b.b;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    cin >> n >> r;
    for (int i = 1; i <= n; i++)
        cin >> p[i].a >> p[i].b;
    sort(p + 1, p + 1 + n, cmp);
    for (int i = 1; i <= n; i++) {
        if (p[i].a <= r && p[i].b >= 0)
            r += p[i].b, cnt++;
        if (p[i].b < 0)
            q.push_back(p[i]);
    }
    sort(q.begin(), q.end(), cmp1);
    dp[r] = cnt;
    ans = cnt;
    for (auto i : q) {
        if (i.b < 0) {
            i.b = -i.b;
            for (int j = 0; j <= r - i.b; j++) {
                if (j + i.b < i.a) {
                    continue;
                }
                dp[j] = max(dp[j], dp[j + i.b] + 1);
                ans = max(ans, dp[j]);
            }
        }
    }
    cout << ans;
    return 0;
}